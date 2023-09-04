//PABLO BOAVENTURA MENEZES ASSUNÇÃO

#include <stdio.h>
#include <stdbool.h>

bool verifica_simetrica(int matriz[][100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matriz[i][j] != matriz[j][i]) {
                return false;
            }
        }
    }
    return true;
}

bool verifica_antisimetrica(int matriz[][100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j && matriz[i][j] == 1 && matriz[j][i] == 1) {
                return false;
            }
        }
    }
    return true;
}

int main(void) {
    int n;
    printf("Digite o numero de elementos do conjunto: ");
    scanf("%d", &n);
    
    int matriz[100][100];
    
    printf("Digite os dados da matriz: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\n");

    bool simetrica = verifica_simetrica(matriz, n);
    bool antissimetrica = verifica_antisimetrica(matriz, n);

    if(antissimetrica) {
        printf("Relacao antissimetrica\n");
    } else if(simetrica) {
        printf("Relacao simetrica\n");
    } else {
        printf("Relacao assimetrica\n");
    }

    return 0;

}
