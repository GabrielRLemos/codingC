/*2. Faça um programa capaz de ler um valor real e escrevˆe-lo com apenas uma casa decimal.*/

#include <stdio.h>

int main(){
    float x;

    puts("Digite um valor real: ");
    scanf("%f", &x);
    
    printf("Numero com uma casa decimal: %.1f", x);

    return 0;
}
