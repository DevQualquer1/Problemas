#include <stdio.h>

void imparpar(int bino, int cino){
    int soma = bino + cino;

    if (soma % 2 == 0){
        printf("Bino\n");
    } else {
        printf("Cino\n");
    }
}

int main(){
    int b, c;

    scanf("%d %d", &b, &c);

    imparpar(b, c);
    return 0;
}