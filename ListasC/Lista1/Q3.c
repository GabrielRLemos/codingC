/*

Sabendo que os argumentos da fun ̧c ̃ao “printf” podem ser express ̃oes (a+b, a/b, a*b...), e n ̃ao somente
argumentos, fa ̧ca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
seu meio.

*/

#include <stdio.h>

int main(){
    int x;

    puts("Digite um valor X: ");
    scanf("%d", &x);

    printf("Triplo: %d\n", x*3);
    printf("Quadrado: %d\n", x*x);
    printf("Meio: %d\n", x/2);

    return 0;
}