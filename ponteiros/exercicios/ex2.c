/*Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
exiba o maior endereo.*/

#include <stdio.h>

int main()
{
    int a = 9, b = 5;
    int *p1 = &a, *p2 = &b;

    if (p1 > p2)
    {
        printf("O endereço = %p de 'a' é maior que o endereço de 'b'\n", (void *)p1);
    }
    else
    {
        printf("O endereço = %p de 'b' é maior que o endereço de 'a'\n", (void *)p2);
    }

    return 0;
}
