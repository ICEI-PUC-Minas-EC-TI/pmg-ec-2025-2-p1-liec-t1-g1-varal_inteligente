## Testes do Projeto

Para garantir o funcionamento adequado do Varal Inteligente, realizamos uma série de testes, tanto em ambiente controlado quanto em condições reais de uso.
Testes Individuais dos Componentes:

Sensor de Chuva: Verificamos a sensibilidade do sensor, ajustando o limiar de detecção para diferentes níveis de umidade. Medimos o tempo de resposta do sensor e a precisão na detecção de chuva simulada com um borrifador.

Sensor de Gás: Testamos a capacidade do sensor de detectar diferentes concentrações de gases, como fumaça de cigarro e gás de isqueiro. Verificamos a estabilidade do sensor e a influência da temperatura e umidade ambiente em suas leituras.

Motor DC: Medimos a velocidade, o ângulo e a força do motor, verificando se ele era capaz de recolher o varal com uma carga de roupas. Testamos a durabilidade do motor, simulando ciclos repetidos de recolhimento e extensão.
Módulo Bluetooth: Verificamos o alcance da comunicação Bluetooth e a estabilidade da conexão entre o Arduino e o aplicativo móvel.

# Testes de Integração:
Detecção Automática: Simulamos chuva e vazamentos de gás para verificar se o Arduino acionava o motor corretamente e recolhia o varal automaticamente. Medimos o tempo de resposta do sistema e a precisão na detecção dos eventos.
Controle Manual: Testamos o controle manual do varal através do aplicativo móvel, verificando se os comandos eram enviados e executados corretamente pelo Arduino.
Comunicação Bluetooth: Monitoramos a comunicação entre o aplicativo e o Arduino, verificando se os dados dos sensores eram transmitidos corretamente e se os comandos eram recebidos e executados sem erros.

# Resultados Encontrados:
Os sensores de chuva e gás demonstraram boa sensibilidade e precisão na detecção dos eventos.
O motor apresentou força suficiente para recolher o varal com uma carga razoável de roupas.
A comunicação Bluetooth se mostrou estável e confiável, com um alcance adequado para o uso em residências e apartamentos.
O aplicativo móvel foi considerado fácil de usar e intuitivo pelos usuários.

# Limitações do Projeto:
O sistema de detecção de gás pode ser sensível a variações de temperatura e umidade, o que pode gerar falsos positivos.
O tempo de resposta do sistema pode ser afetado pela velocidade da conexão Bluetooth e pelo tempo de processamento do Arduino.
A capacidade de carga do varal é limitada pela força do motor.
O sistema não possui um sistema de proteção contra ventos fortes, que podem danificar o varal ou as roupas.
O protótipo foi projetado para um varal de tamanho e configuração específicos, e pode não ser facilmente adaptável a outros tipos de varais.

# Melhorias:
Implementar um sistema de calibração automática dos sensores para compensar as variações de temperatura e umidade.
Otimizar o código do Arduino para reduzir o tempo de processamento e melhorar a velocidade de resposta do sistema.
Utilizar um motor mais potente para aumentar a capacidade de carga do varal.
Adicionar um sensor de vento para proteger o varal contra ventos fortes.
Implementar um mecanismo para estender o varal automaticamente após a chuva ou a dispersão do gás.
Projetar um sistema modular que possa ser facilmente adaptado a diferentes tipos de varais.
Adicionar uma função de alerta no celular caso o varal se feche.
Os testes realizados nos permitiram validar o funcionamento básico do Varal Inteligente e identificar áreas para aprimoramento. As limitações apontadas servirão de base para futuros desenvolvimentos e melhorias no projeto.
