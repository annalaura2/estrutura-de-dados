/*Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco. */

#include <stdio.h>

int main(void)
{
    int a, b;
    int *p1 = &a, *p2 = &b;

    printf("informe o primeiro valor: ");
    scanf("%d", &a);
    printf("informe o segundo valor: ");
    scanf("%d", &b);

    *p1 = 10;
    *p2 = 20;

    printf("novos valores: %d, %d\n", a, b);
}
