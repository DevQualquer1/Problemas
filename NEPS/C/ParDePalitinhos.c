#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, calculo, resultado;

    scanf("%d", &N);

    int v[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &v[i]);
    }

    resultado = (v[0] > v[1] ? v[0] - v[1] : v[1] - v[0]);

    for (int i = 0; i < N; i++){
        calculo = (v[i] > v[i + 1] ? v[i] - v[i + 1] : v[i + 1] - v[i]);
        resultado = (calculo < resultado ? resultado = calculo : resultado);
    }
    
    printf("%d", resultado);

    return 0;
}