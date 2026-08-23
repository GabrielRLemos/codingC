/*
Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
pago, considerando que o restaurante cobra 10% de taxa para o garçom.
*/

#include <stdio.h>

int main(){
    float conta;
    float valorFinal;

    puts("Digite o valor da conta: ");
    scanf("%f", &conta);

    valorFinal = conta + conta*0.1;

    printf("O valor final a ser pago eh: R$%.2f", valorFinal);

    return 0;
}