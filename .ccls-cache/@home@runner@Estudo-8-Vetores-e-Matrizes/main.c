#include <stdio.h>

//Vetores (Array) e Matrizes

int main() {
  vetores();
  return 0;
}

//Vetores

/*
Para saber como funciona aqui, não é identico as linguagens anteriores.

Aqui, criamos uma variavel e determinamos quandos espaços(indices) vai ter:

int vetor[5]

-> int - é o tipo de dado que vai ser armazenado
-> vetor - é o nome da variavel
-> [5] - quantidade de espaço

e a quantidade de espaço que pega, pois não é que ela vai ser: 0,1,2,3,4,5
ela vai ser: 0,1,2,3,4.

Então caso quisermos saber o indice posteriormente, devemos ter isso em mente
*/

int vetores(){
  char nome[6] = "Sergio";
  printf("O nome é: %s", nome);
}