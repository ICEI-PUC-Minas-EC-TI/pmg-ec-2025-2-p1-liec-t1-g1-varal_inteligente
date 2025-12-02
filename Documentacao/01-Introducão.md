# Introdução

O projeto Varal Inteligente propõe a automação de um varal de roupas utilizando Arduino, sensores de chuva e fumaça, servo motor e um aplicativo Android.
A ideia surge do cenário típico de quem mora em casas ou apartamentos sem área de serviço coberta, em cidades com clima instável: basta uma chuva rápida ou fumaça vinda de queimadas, churrascos ou poluição para estragar as roupas que estavam secando.

Na rotina corrida, o usuário nem sempre está em casa ou atento ao tempo para recolher as roupas a tempo. Além disso, pessoas idosas, com mobilidade reduzida ou que moram sozinhas podem ter ainda mais dificuldade em cuidar dessa tarefa.
Diante desse contexto, o projeto busca oferecer uma solução simples, de baixo custo e fácil de usar, que monitore o ambiente e proteja as roupas automaticamente, mantendo a opção de controle manual pelo celular.

## Problema

O problema central que o projeto busca resolver é:

 Proteger roupas estendidas em varais externos contra chuva e fumaça, sem depender da presença do morador na residência 

Estamos contra:

O clima imprevisível.

Em muitas moradias, o varal fica em áreas externas (sacadas, quintais, fundos), dificultando o acesso rápido em caso de chuva.

A fumaça que impregnar nas roupas, causando desconforto e desperdício de tempo com a necessidade da lavagem.

Nem todos os usuários têm familiaridade com soluções de automação complexas ou caras.

A aplicação é pensada para um contexto doméstico, utilizando tecnologias acessíveis:

Arduino Uno para controle lógico do sistema;

Sensores analógicos de chuva e fumaça (MQ-2);

Módulo Bluetooth HC-05 para comunicação com o aplicativo Android;

App Android desenvolvido no MIT App Inventor, permitindo controle e monitoramento pelo celular.

## Objetivos

Objetivo Geral

Desenvolver um protótipo de varal automático inteligente, capaz de fechar-se automaticamente em caso de chuva ou fumaça e permitir controle manual via aplicativo móvel, contribuindo para a proteção das roupas e maior conforto ao usuário.

Objetivos Específicos

Integrar hardware e sensores

Implementar a leitura de sensores de chuva e fumaça no Arduino e definir limiares adequados para detecção de risco.

Desenvolver a lógica de decisão do sistema

Criar o algoritmo que controla o servo motor, priorizando a segurança (fechar em alerta) sem impedir que o usuário mantenha o varal fechado por escolha própria quando não houver risco.

Implementar a comunicação Bluetooth com aplicativo Android

Estabelecer um protocolo simples de troca de mensagens (E, G, S e retorno estado;umidade;fumaca) entre Arduino e app, garantindo confiabilidade na atualização de status.

Construir uma interface de usuário simples e intuitiva

Criar um aplicativo que permita abrir/fechar o varal, visualizar o estado atual e receber alertas de chuva e/ou fumaça em tempo quase real.

Documentar e disponibilizar o projeto

Publicar código, esquemas e instruções de montagem/uso em um repositório GitHub, permitindo que outros estudantes e entusiastas reproduzam e evoluam o projeto.
 
## Público-Alvo

O público-alvo principal do projeto são:

Moradores de casas ou apartamentos que utilizam varais externos e sofrem com:

mudanças rápidas de tempo;

fumaça de vizinhos, churrasqueiras, queimadas ou vias movimentadas;

falta de tempo para ficar “de olho” nas roupas.

Pessoas com rotina corrida

Estudantes, trabalhadores e famílias que passam grande parte do dia fora de casa e desejam uma solução que minimize o risco de perder uma lavagem inteira de roupas.

Pessoas com mobilidade reduzida ou idosos

Usuários que têm dificuldade de se deslocar rapidamente até o varal, mas que conseguem usar um celular para acompanhar o estado do sistema e acionar comandos básicos.

Estudantes e entusiastas de tecnologia/IoT

O projeto também serve como exemplo didático para quem deseja aprender sobre Arduino, sensores, comunicação Bluetooth e integração com aplicativos móveis.

Em termos de perfil tecnológico, espera-se que os usuários finais tenham familiaridade básica com smartphones (instalar e usar aplicativos simples). A parte de configuração e montagem de hardware é mais voltada para alunos e makers, que podem atuar como “instaladores” da solução na casa do usuário final.
