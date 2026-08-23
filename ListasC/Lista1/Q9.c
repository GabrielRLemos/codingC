/*
Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
f ́ormula VOLUME = COMPRIMENTO * LARGURA * ALTURA.
*/

#include <stdio.h>

int main(){
    unsigned int v, c, l, a;

    puts("Digite o comprimento do paralelepipedo: ");
    scanf("%u", &c);
    
    puts("Digite a largura do paralelepipedo: ");
    scanf("%u", &l);

    puts("Digite a altura do paralelepipedo: ");
    scanf("%u", &a);

    v = c*l*a;

    printf("Volume: %uu.v", v);

    return 0;
}