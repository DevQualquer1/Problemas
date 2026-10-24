#include <stdio.h>

int main(){

    int i,X;

    scanf("%d", &X);

    for(i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", X, i, i * X);
    }
}