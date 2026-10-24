#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, A, B, statusA, statusB;

    statusA = 0;
    statusB = 0;

    scanf("%d", &N);

    int v[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &v[i]);

        if(v[i] == 1){
            if(statusA == 0){
                statusA = 1;
            }else{
                statusA = 0;
            }
        }else{
            if(statusA == 0 && statusB == 0){
                statusA = 1;
                statusB = 1;
            }else if (statusA == 1 && statusB == 1){
                statusA = 0;
                statusB = 0;
            }else if (statusA == 1 && statusB == 0){
                statusA = 0;
                statusB = 1;
            }else{
                statusA = 1;
                statusB = 0;
            }
        }
    }

    printf("%d\n%d", statusA, statusB);

    return 0;
}