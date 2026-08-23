/*
1. Faça um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases hexadecimal e octal.

Ex.: Entre com o valor: 10
Hexadecimal: A
Octal: 12
*/

#include <stdio.h>

int main(){
    int x;

    puts("Digite um valor para X: ");
    scanf("%i", &x);

    printf("Valor Decimal: %d\n", x);
    printf("Valor em Hexa: %#X\n", x);
    printf("Valor em Octa: %o\n", x);

    return 0;
}