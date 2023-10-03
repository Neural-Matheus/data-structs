# Estruturas de Dados em C++ - Procedural e Orientada a Objetos

Este projeto tem como objetivo implementar diversas estruturas de dados conhecidas em C++ utilizando duas abordagens diferentes: programação procedural com `structs` e programação orientada a objetos (POO) com classes.

## O Que São Estruturas de Dados?

As estruturas de dados são formas de organizar e armazenar dados de maneira eficiente em um programa de computador. Elas desempenham um papel fundamental na programação, permitindo o armazenamento, manipulação e recuperação eficazes de informações. As estruturas de dados podem ser simples, como arrays, ou mais complexas, como árvores e grafos, dependendo das necessidades do projeto.

## Uso de Estruturas de Dados

As estruturas de dados são amplamente utilizadas na programação para resolver uma variedade de problemas. Elas desempenham um papel fundamental em várias áreas, incluindo:

- **Banco de Dados**: Em sistemas de gerenciamento de bancos de dados, estruturas de dados como árvores B e tabelas hash são usadas para indexar e recuperar informações de maneira eficiente.

- **Algoritmos e Computação Gráfica**: Em algoritmos de busca, ordenação e renderização de gráficos, estruturas de dados como listas encadeadas, filas e árvores são fundamentais para otimizar o desempenho.

- **Sistemas Operacionais**: Os sistemas operacionais usam estruturas de dados para gerenciar processos, memória e sistemas de arquivos.

- **Aplicações Web e Servidores**: Em aplicativos da web e servidores, estruturas de dados são usadas para armazenar informações de sessão, cache de dados e gerenciamento de conexões.

## Explicações das Estruturas de Dados

Aqui estão explicações detalhadas de cada estrutura de dados implementada neste projeto:

### LinkedList (Lista Encadeada)

- **Descrição**: Uma lista encadeada é uma estrutura de dados linear onde cada elemento é um nó que contém um valor e uma referência ao próximo nó na lista.
- **Funcionalidade**: Permite a inserção, remoção e busca eficientes de elementos. Útil quando o tamanho da lista pode crescer ou encolher dinamicamente.
- **Arquivo**: [LinkedList_procedural.cpp](LinkedList/LinkedList_procedural.cpp), [LinkedList_class.cpp](LinkedList/LinkedList_class.cpp)

### Queue (Fila)

- **Descrição**: Uma fila é uma estrutura de dados que segue a política FIFO (First-In-First-Out), onde o primeiro elemento adicionado é o primeiro a ser removido.
- **Funcionalidade**: Usada quando é necessário processar itens na ordem em que foram adicionados, como em tarefas de agendamento e gerenciamento de tarefas.
- **Arquivo**: [Queue_procedural.cpp](Queue/Queue_procedural.cpp), [Queue_class.cpp](Queue/Queue_class.cpp)

### Stack (Pilha)

- **Descrição**: Uma pilha é uma estrutura de dados que segue a política LIFO (Last-In-First-Out), onde o último elemento adicionado é o primeiro a ser removido.
- **Funcionalidade**: Útil para rastrear informações na ordem inversa, como em avaliação de expressões matemáticas e chamadas de função recursivas.
- **Arquivo**: [Stack_procedural.cpp](Stack/Stack_procedural.cpp), [Stack_class.cpp](Stack/Stack_class.cpp)

### Tree (Árvore)

- **Descrição**: Uma árvore é uma estrutura de dados hierárquica que consiste em nós conectados por arestas. Cada nó pode ter zero ou mais nós filhos.
- **Funcionalidade**: Usada para representar relações hierárquicas, como a estrutura de pastas em um sistema de arquivos e a organização de dados em uma árvore de busca binária.
- **Arquivo**: [Tree_procedural.cpp](Tree/Tree_procedural.cpp), [Tree_class.cpp](Tree/Tree_class.cpp)

## Contribuindo

Sinta-se à vontade para contribuir com melhorias para este projeto! Se você encontrar algum problema ou tiver alguma sugestão, abra uma issue ou envie um pull request.

Agradeço antecipadamente pelo seu apoio!
