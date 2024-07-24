#include <stdio.h>

int main(void){

    /*. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de 
cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a 
modificacao. */

    int a = 10; 
    float b = 34.5; 
    char c = 'c';

    int *pa = &a; 
    float *pb = &b;
    char *pc = &c; 

    printf("valores antigos: \n" ); 
    printf("inteiro: %d/n ", a); 
    printf("float: %f\n", b); 
    printf("char: %c\n\n", c);

    *pa = 20; 
    *pb = 13.5;
    *pc = 'd';

    printf("novos valores: \n");
    printf("inteiro: %d\n", a); 
    printf("float: %f\n", b); 
    printf("char: %c\n", c);



    

}
