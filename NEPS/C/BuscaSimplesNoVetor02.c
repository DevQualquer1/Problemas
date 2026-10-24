#include <stdio.h>

int main() {
    int v[10];
    int X;
    int conta = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &X);

    for (int i = 0; i < 10; i++) {
        if (v[i] == X) {
            conta++;
        }
    }

    if (conta == 0) {
        printf("Mia x\n");
    } else {
        printf("%d\n", conta);

        for (int i = 0; i < 10; i++) {
            if (v[i] == X) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}