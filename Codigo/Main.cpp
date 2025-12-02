#include <SoftwareSerial.h>
#include <Servo.h>


SoftwareSerial BT(2, 3);  // RX, TX


Servo varal;
const int SERVO_PIN = 9;


const int PINO_CHUVA  = A0;
const int PINO_FUMACA = A1;


int limiarChuva  = 500;  // chuva: valor < 500 = molhado
int limiarFumaca = 35;   // fumaça: valor > 30 = fumaça


bool varalFechado = false;


int valorChuva  = 0;
int valorFumaca = 0;


unsigned long ultimoMovimento    = 0;
const unsigned long intervaloMov = 3000; // 3s

void moverVaral(bool fechar);
void enviarStatusBytes();

void setup() {
  Serial.begin(9600);
  BT.begin(9600);

  Serial.println("Varal automatico - Arduino + HC05");

  varal.attach(SERVO_PIN);
  varal.write(0);   // começa ABERTO
  varalFechado = false;

  pinMode(PINO_CHUVA,  INPUT);
  pinMode(PINO_FUMACA, INPUT);
}

void loop() {
 
  valorChuva  = analogRead(PINO_CHUVA);
  valorFumaca = analogRead(PINO_FUMACA);

  bool detectouChuva  = (valorChuva  < limiarChuva);
  bool detectouFumaca = (valorFumaca > limiarFumaca);

  Serial.print("Chuva=");
  Serial.print(valorChuva);
  Serial.print(detectouChuva ? " (UMIDO)" : " (SECO)");
  Serial.print(" | Fumaca=");
  Serial.print(valorFumaca);
  Serial.println(detectouFumaca ? " (FUMACA)" : " (OK)");


  bool perigo = (detectouChuva || detectouFumaca);


  if (perigo && !varalFechado &&
      (millis() - ultimoMovimento > intervaloMov)) {

    Serial.println("AUTO: fechando por sensor (chuva/fumaca)...");
    moverVaral(true);
  }



  
  if (BT.available()) {
    char cmd = BT.read();
    Serial.print("Comando recebido: ");
    Serial.println(cmd);

    switch (cmd) {
      case 'G':   // FECHAR varal (guardar)
        if (perigo) {
          Serial.println("MANUAL BLOQUEADO: chuva/fumaca detectada, varal sob controle automatico.");
        } else {
          Serial.println("MANUAL: fechar varal (G)");
          moverVaral(true);
        }
        break;

      case 'E':  
        if (perigo) {
          Serial.println("MANUAL BLOQUEADO: chuva/fumaca detectada, proibido abrir.");
        } else {
          Serial.println("MANUAL: abrir varal (E)");
          moverVaral(false);
        }
        break;

      case 'S':   // STATUS
        Serial.println("BT: pedido de STATUS (S)");
        enviarStatusBytes();
        break;

      default:
        Serial.println("BT: comando desconhecido");
        break;
    }
  }

  delay(150);
}

void moverVaral(bool fechar) {
  if (fechar) {
    varal.write(90);      
    varalFechado = true;
    Serial.println("Varal FECHADO (90 graus)");
  } else {
    varal.write(0);
    varalFechado = false;
    Serial.println("Varal ABERTO (0 graus)");
  }
  ultimoMovimento = millis();
}


void enviarStatusBytes() {
  bool detectouChuva  = (valorChuva  < limiarChuva);
  bool detectouFumaca = (valorFumaca > limiarFumaca);

  byte estadoByte = varalFechado   ? 1 : 0;
  byte umidByte   = detectouChuva  ? 1 : 0;
  byte fumaByte   = detectouFumaca ? 1 : 0;

  BT.write(estadoByte);
  BT.write(umidByte);
  BT.write(fumaByte);


  Serial.print("Status bytes -> ");
  Serial.print((int)estadoByte);
  Serial.print(",");
  Serial.print((int)umidByte);
  Serial.print(",");
  Serial.println((int)fumaByte);
}
