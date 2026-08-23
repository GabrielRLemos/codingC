/*
Escreva um programa que leia um valor num ́erico inteiro e apresente como resultado os seus valores
sucessor e antecessor.
*/

#include <stdio.h>

int main(){
    int x;

    puts("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("Sucessor: %d\n", x+1);
    printf("Antecessor: %d\n", x-1);

    return 0;
}