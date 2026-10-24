#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, L, C, resultado;

    scanf("%d", &N);

    L = 0;
    C = 0;
    resultado = 0;

    for(int i = 0; i < N; i++){
        scanf("%d%d", &L, &C);
        if(L == C){
            resultado += 0;
        }else if (L > C){
            resultado += C;
        }else{
            resultado += 0;
        }
    }

    printf("%d", resultado);

    return 0;
}