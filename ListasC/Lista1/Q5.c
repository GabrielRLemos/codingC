/*
Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
atrav ́es da seguinte f ́ormula:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7
*/

#include <stdio.h>

int main(){
    float altura;
    char sexo;
    float pesoIdeal;


    puts("Digite sua altura (metros): ");
    scanf("%f", &altura);

    puts("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    if(sexo == 'M'){
        pesoIdeal = 72.7 * altura - 58;
        printf("Seu peso ideal eh: %f", pesoIdeal);

    } else if (sexo == 'F'){
        pesoIdeal = 62.1 * altura - 44.7;
        printf("Seu peso ideal eh: %f", pesoIdeal);

    } else{
        puts("Erro, Genero nao identificado.");

    }
    

    return 0;
}