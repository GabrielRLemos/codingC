#include <stdlib.h>
#include <stdio.h>

int ehSimetrica(int *M, int n);
int contaSeguidores(int *M, int n, int u);

int main() {
    int n, u;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);

    int M[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nDigite o usuario que deseja consultar: ");
    scanf("%d", &u);

    if(ehSimetrica(&M[0][0], n)) {
        printf("\nA matriz eh simetrica!\n");
    } else {
        printf("\nA matriz nao eh simetrica!\n");
    }

    printf("O usuario %d possui %d seguidores.\n",
           u, contaSeguidores(&M[0][0], n, u));

    return 0;
}

int ehSimetrica(int *M, int n){
    for(int i = 0; i < n; i){
        for(int j = 0; j < n; j++){
            if(*(M + i*n + j) != *(M + j*n + i)){
                return 0;
            }
        }
    }
    return 1;
}

int contaSeguidores(int *M, int n, int u) {
    int cont = 0;

    for(int i = 0; i < n; i++) {
        if(*(M + i*n + u) == 1) {
            cont++;
        }
    }

    return cont;
}

