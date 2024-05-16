#include <stdio.h>


//Recapitulação sobre constante

/*
Para criar uma constante, basta colocar no topo:

#define NOME_CONSTANTE valor

E assim criamos uma variavel que terá sempre um valor, podemos facilitar nosso desenvolvimento
*/
//Vetores (Array) e Matrizes

int main() {
  maiorMatriz();
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

//Já nos adiantamos e vimos como fazer uma string, finalmente

//Vamos ver agora como podemos fazer uma lista tecnicamente com varios dados armazenados em varios espaços e utiliza-los sem precisar chamar um por um
#define po 5

int notas(){
  float notas[po], media = 0;
  int i;
  notas[0]= 5.2;
  notas[1]= 7.5;
  notas[2]= 8.9;
  notas[3]= 9.8;
  notas[4]= 4.5;

  for(i = 0; i < po; i++){
    media += notas[i];
  }
  media /= 5;

  printf("A media é %.2f", media);
}

// Encontrando o vetor de um determinado dado

int vetor(){
  int v[po], maior, i = 0, indiceMaior;
  
  while (i < po){
    fflush(stdin);
    printf("Digite um numero: ");
    scanf(" %d", &v[i]);
    i++;
  }

  maior = v[0];

  
  for(i = 1; i < po; i++){
    if (v[i] > maior){
      maior = v[i];
      indiceMaior = i;
    }
  }

  printf("O maior numero é: %d\nEle está na posição %d", maior, indiceMaior);
}

//Matrizes - Adiciona dimensões

#define linha 3
#define coluna 2

int matriz(){
  int mat[linha][coluna];
  int L, C;

  // Depois de declarar as variaveis correspondentes a linha e a coluna, criamos o for loop para preencher estes variaveis. OBS: O primeiro for é para as linhas e o segundo para as colunas, o segundo for vai dentro do primeiro
  
  for(L = 0; L < linha; L++){
    for(C = 0; C < coluna; C++){
      printf("Digite um numero: ");
      scanf("%d", &mat[L][C]);
    }
  }
  //No for acima, quando vamos inserir os dados, tenhamos em mente que iremos fornecer a primeira linha, então sempre bom saber quantas colunas terá, para que saiba quando será o pulo para a proxima linha 
  for(L = 0; L < linha; L++){
    for(C = 0; C < coluna; C++){
      printf("%i\t", mat[L][C]);
    }
    printf("\n");
  }
}


// Vamos encontrar o maior numero de uma matriz

int maiorMatriz(){
  int mat[linha][coluna] = {{12,15},{25,5},{10,20}}; //Aqui, criamos uma matriz com 3 linhas e 2 colunas, e inserimos os dados ne, cada {} é a linha, e cada valor dentro das {} são os valores das 2 colunas,
  
  int L, C;
  int linMaior = 0, colMaior= 0;

  for(L = 0; L < linha; L++){
    for(C = 0; C < coluna; C++){
      printf("%i\t", mat[L][C]);
    }
    printf("\n");
  }

  for(L = 0; L < linha; L++){
    for(C = 0; C < coluna; C++){
      if(mat[L][C] > mat[linMaior][colMaior]){
        linMaior = L;
        colMaior = C;
      }
    }
  }
  printf("O maior numero é %i e está na linha %i e coluna %i", mat[linMaior][colMaior], linMaior, colMaior);
}