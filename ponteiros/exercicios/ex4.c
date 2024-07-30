/*. Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas ˜
2 variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas 
variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B 
tera o valor de A*/

#include <stdio.h> 
#include <stdlib.h>

void trocaV(int *, int *);

int main(void){

    int a, b; 

    printf("informe dois valores:");
    scanf("%d""%d", &a, &b);

    trocaV(&a, &b);
    printf("%d ""%d",a, b);

}

void trocaV(int *a, int *b){

    int temp; 
    temp = *a; 
    *a = *b;
    *b = temp;


}
