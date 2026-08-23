/*
Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao
quadrado.
*/

#include <stdio.h>

int main(){
    int x;

    puts("Digite um valor inteiro: ");
    scanf("%d", &x);

    x *= x;

    printf("Valor ao quadrado: %d", x);

    return 0;
}