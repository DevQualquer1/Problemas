#include <stdio.h>

int main(){
    int v[10];
    int X;
    int encontrado = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &X);

    for (int i = 0; i < 10; i++) {
        if (v[i] == X){
            encontrado = 1;
            break;
        }
    }

    if (encontrado){
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
}