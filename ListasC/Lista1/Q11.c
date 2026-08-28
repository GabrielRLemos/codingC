/*
Escreva um programa que pe ̧ca ao usu ́ario para digitar dois n ́umeros, obtenha-os do usu ́ario e imprima
a soma, o produto, a diferen ̧ca, o quociente e o resto da divis ̃ao dos dois n ́umeros.
*/


#include <stdio.h>

int main(){
    int x, y, soma, prod, dif, mod,quo;
    
    puts("Escreva um numero: ");
    scanf("%i", &x);

    puts("Escreva outro numero: ");
    scanf(" %i", &y);

    soma = x + y;
    prod = x * y;
    dif = x - y;
    quo = x/y;
    mod = x % y;

    printf("%i + %i = %i\n", x,y,soma);
    printf("%i - %i = %i\n", x,y,dif);
    printf("%i * %i = %i\n", x,y,prod);
    printf("%i / %i = %i\n", x,y,quo);
    printf("%i mod %i = %i\n", x,y,mod);

    return 0;
}