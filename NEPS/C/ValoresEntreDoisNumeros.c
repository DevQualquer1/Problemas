#include<stdio.h>

int main(){
    int i,trocas,A,B;

    scanf("%d%d", &A,&B);

    if(A > B){
        trocas = A;
        A = B;
        B = trocas;
    }

    for(i = A; i <= B; i++){
        printf("%d ", i);

    }
}