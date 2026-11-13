#include <stdio.h>
#include <stdlib.h>

double **filtraAlertas(double *T, int N, double L, int *k);
void saturaAlertas(double **A, int k, double L);

int main(int argc, char *argv[]){
    int N, k;
    double L;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &N);

    double *T = malloc(N * sizeof(double));

    if(T == NULL){
        return 1;
    }

    for(int i = 0; i < N; i++){
        printf("T[%d]: ", i);
        scanf("%lf", &T[i]);
    }

    printf("Digite o limite L: ");
    scanf("%lf", &L);

    double **A = filtraAlertas(T, N, L, &k);

    if(k > 0){
        saturaAlertas(A, k, L);
    }

    printf("Vetor apos saturacao:\n");

    for(int i = 0; i < N; i++){
        printf("%.2lf ", T[i]);
    }

    printf("Quantidade de alertas: %d\n", k);

    free(A);
    free(T);

    return 0;
}

double **filtraAlertas(double *T, int N, double L, int *k){
    *k = 0;

    for(int i = 0; i < N; i++){
        if(*(T + i)> L){
            (*k)++;
        }
    }

    if(*k == 0){
        return NULL;
    }
    double **A = malloc((*k) * sizeof(double *));

    if (A == NULL){
        return NULL;
    }

    int count = 0;
    for (int i = 0; i < N; i++){
        if(T[i]> L){
            A[count] = &T[i];
            count++;
        }
    }
    
    return A;
}

void saturaAlertas(double **A, int k, double L){
    for(int i = 0; i < k; i++){
        *A[i] = L;
    }
}
