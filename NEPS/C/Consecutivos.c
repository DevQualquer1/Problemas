#include <stdio.h>

int main(){

    int N;

    scanf("%d", &N);

    int v[N];
    int pontos = 1;
    int ponto_temp = 1;

    for(int i = 0; i < N; i++){
        scanf("%d", &v[i]);
    }

    int numero = v[0];

    for (int j = 1; j < N; j++){
        if (v[j] == numero){
            ponto_temp++;
        }else{
            if (ponto_temp > pontos){
                pontos = ponto_temp;
            }
            numero = v[j];
            ponto_temp = 1;
        }
    }

    (ponto_temp > pontos) ? pontos = ponto_temp: 0;

    printf("%d\n", pontos);

    return 0;
}