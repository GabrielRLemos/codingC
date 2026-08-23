//Fa ̧ca um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.

#include <stdio.h>

int main(){
    unsigned int horas;
    unsigned int minutos;
    unsigned int segundos;

    puts("Digite as horas: ");
    scanf("%u", &horas);

    puts("Digite os minutos: ");
    scanf(" %u", &minutos);

    puts("Digite os segundos: ");
    scanf(" %u", &segundos);

    horas *= 60 * 60;
    minutos *= 60;

    printf("Total em segundos: %u", horas + minutos + segundos);

    return 0;
}