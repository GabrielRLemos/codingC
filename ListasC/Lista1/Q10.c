/*
Elabore um programa que apresente o valor da convers ̃ao em d ́olar de um valor lido em real. O
programa deve solicitar o valor da cota ̧c ̃ao do d ́olar e tamb ́em a quantidade de reais que o usu ́ario
deseja converter.
*/

#include <stdio.h>

int main(){
    float cot, real, dol;

    puts("Digite a cotacao do dolar: ");
    scanf("%f", &cot);

    puts("Digite sua quantidade de reais: ");
    scanf(" %f", &real);

    dol = real/cot;

    printf("Conversao em dolar: $%.2f", dol);

    return 0;
}