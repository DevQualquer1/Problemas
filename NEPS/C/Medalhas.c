#include <stdio.h>

int main(){
    int t[3];

    for (int i = 0; i < 3; i++){
        scanf("%d", &t[i]);
    }

    if (t[0] < t[1] && t[1] < t[2]){
        printf("%d\n%d\n%d", 1, 2, 3);

    }else if (t[0] < t[2] && t[2] < t[1]){
        printf("%d\n%d\n%d", 1, 3, 2);

    }else if (t[1] < t[0] && t[0] < t[2]){
        printf("%d\n%d\n%d", 2, 1, 3);

    }else if (t[1] < t[2] && t[2] < t[0]){
        printf("%d\n%d\n%d", 2, 3, 1);

    }else if (t[2] < t[0] && t[0] < t[1]){
        printf("%d\n%d\n%d", 3, 1, 2);

    }else if (t[2] < t[1] && t[1] < t[0]){
        printf("%d\n%d\n%d", 3, 2, 1);
    }

    return 0;
}