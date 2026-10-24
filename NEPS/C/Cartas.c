#include <stdio.h>

int main(){

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (A == B){
        printf("%d", C);
    }else if (A == C){
        printf("%d", B);
    }else{
        printf("%d", A);
    }
    
    return 0;
}