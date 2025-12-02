
# Materiais

Os materiais utilizados no projeto foram:
Placa Microcontroladora: Arduino Uno (utilizado para processar os dados dos sensores e controlar o motor)
Sensores:
* Sensor de Umidade (detecta a presença de água)
* Sensor de Chuva (para detectar a presença de gases no ar)
* Atuador: Motor DC (aciona o mecanismo de recolhimento do varal)
* Módulo Bluetooth: HC-05 (permite a comunicação sem fio entre o Arduino e o aplicativo móvel)
* Fonte de Alimentação: Fonte externa 5V (para alimentar o Arduino e o motor)
* Fios e Cabos: Jumpers e fios para realizar as conexões elétricas
* Resistores: Componentes para limitar a corrente elétrica nos circuitos
* Protoboard: Placa de ensaio para prototipagem dos circuitos
Materiais de Construção:
* Casa de Plástico (utilizada para proteger os componentes eletrônicos e o motor)
* Canudo Plástico (utilizados para estender as roupas)

# Desenvolvimento

O desenvolvimento do Varal Inteligente foi realizado em etapas distintas, desde a concepção da ideia até a implementação da solução final.

## Desenvolvimento do Aplicativo

### Interface
A interface do aplicativo foi projetada no App Inventor, buscando simplicidade e facilidade de uso. A tela principal apresenta os seguintes elementos:
Botão de Conexão Bluetooth: Permite estabelecer a conexão com o módulo Bluetooth do Arduino.
Indicador de Conexão: Exibe o status da conexão Bluetooth (conectado ou desconectado).
Botão de Acionamento Manual: Permite ao usuário recolher ou estender o varal manualmente, independentemente da detecção dos sensores.
Indicadores de Status dos Sensores: Exibem o status dos sensores de chuva e gás (detectado ou não detectado).

### Código

O código do aplicativo foi desenvolvido em blocos no App Inventor, seguindo a lógica de:
Inicialização do Bluetooth: Configuração do componente Bluetooth para buscar e conectar com o módulo HC-05 do Arduino.
Comunicação com o Arduino: Envio de comandos para o Arduino através da conexão Bluetooth, acionando o motor para recolher ou estender o varal.
Recebimento de Dados dos Sensores: Recebimento de dados dos sensores de chuva e gás enviados pelo Arduino, atualizando os indicadores de status na tela.
Controle Manual: Implementação da lógica para acionar o motor manualmente através do botão de acionamento.

## Desenvolvimento do Hardware
### Montagem

O processo de montagem do hardware envolveu as seguintes etapas:
Conexão dos Sensores ao Arduino: Os sensores de chuva e gás foram conectados às portas analógicas do Arduino, utilizando resistores para limitar a corrente elétrica.
Conexão do Módulo Bluetooth ao Arduino: O módulo Bluetooth HC-05 foi conectado às portas seriais do Arduino para permitir a comunicação sem fio.
Conexão do Motor ao Arduino: O motor DC foi conectado ao Arduino através de um driver de motor, que permite controlar a direção e a velocidade do motor.
Acomodação dos Componentes na Casa de Plástico: Todos os componentes eletrônicos e o mecanismo de recolhimento foram acomodados na casa de plástico, garantindo a proteção contra as intempéries.

### Desenvolvimento do Código

O código do Arduino foi desenvolvido no VS Code e adaptado para o Arduino IDE, seguindo a lógica de:
Inicialização dos Sensores: Configuração das portas dos sensores como entradas e definição dos valores de referência para detecção de chuva e gás.
Leitura dos Sensores: Leitura dos valores dos sensores de chuva e gás através das portas analógicas.
Detecção de Chuva e Gás: Comparação dos valores lidos com os valores de referência para determinar se há chuva ou gás presente no ambiente.
Acionamento do Motor: Envio de comandos para o driver do motor para acionar o recolhimento ou extensão do varal, dependendo da detecção dos sensores.
Comunicação com o Módulo Bluetooth: Envio de dados dos sensores para o aplicativo móvel através do módulo Bluetooth.
Recebimento de Comandos do Aplicativo: Recebimento de comandos do aplicativo móvel para acionar o motor manualmente.


## Comunicação entre App e Hardware

O processo de comunicação entre o aplicativo móvel e o Arduino foi realizado através do módulo Bluetooth HC-05. O aplicativo envia comandos para o Arduino, como "recolher" ou "estender", e recebe dados dos sensores de chuva e gás. O Arduino processa os comandos e os dados, acionando o motor e atualizando os indicadores de status no aplicativo.

