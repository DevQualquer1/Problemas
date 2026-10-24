#include <stdio.h>

int main() {
    char S[51];

    scanf("%s", S);

    printf("Vogais: ");
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') {
            printf("%c", S[i]);
        }
    }

    printf("\nConsoantes: ");
    for (int i = 0; S[i] != '\0'; i++) {
        if (!(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')) {
            printf("%c", S[i]);
        }
    }

    printf("\n");

    return 0;
}