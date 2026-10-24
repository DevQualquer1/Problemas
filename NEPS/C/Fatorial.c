#include <stdio.h>
#include <stdlib.h>

int f(int x){
    if(x == 0){
        return 1;
    }
    else{
    return x * f(x - 1);
        }
}

int main(){    	
    int N;
    scanf("%d", &N);
    printf("%d", f(N));
}