#include <stdio.h>
#include <stdlib.h> 

int main(){
    int A, S, soma;
    
    scanf("%d%d", &A, &S);

    soma = A + S;

    printf((soma <= 50) ? "S" : "N");

    return 0;
}