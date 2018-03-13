# 10. Classes

## 10.1.

Um membro _private_ de uma _class_ só pode ser acedido dentro da _class_ enquanto que um membro _public_ pode ser acedido em qualquer parte do programa.

## 10.2.

A _interface_ de uma _class_ inclui as suas variáveis e funções. A _implementation_ de uma _class_ inclui as definições dessas funções e variáveis.

## 10.3.

Como fazem parte da class, as _member functions_ têm acesso às suas variáveis `private` enquanto que as _application functions_ não.

## 10.7.

As _access functions_ são `public` _functions_ de uma _class_ que fazem _return_ das suas variáveis `private` para serem usadas no resto do programa. As _utility functions_ normalmente são `private` e servem para modificar as variáveis `private` dentro de uma _class_ .

## 10.8.

O `struct` tem origem no C. No C++, as funções do `struct` e da `class` são basicamente as mesmas, a única diferença é que quando não é especificado se as suas variáveis são `private` , `public` ou `protected` , por defeito no `struct` são `public` e por defeito na `class` são private.

## 10.15.

O _copy constructor_ é chamado 7 vezes neste excerto de código. Sempre que um objeto é parâmetro de uma função é feita uma cópia por referência deste, dentro da função do excerto é feita uma cópia de `u` que é _assigned_ a `v` e depois 
é feita uma cópia por referência de `w`. Esta função é chamada duas vezes e a última cópia é feita quando se faz _assign_ de `y` ao que é _returned_ pela função.
