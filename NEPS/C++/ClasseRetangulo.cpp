#include <stdio.h>

class Retangulo {
    int x1, x2, y1, y2;

    public:

    Retangulo(){
        x1 = 0;
        x2 = 0;
        y1 = 0;
        y2 = 0;
    }

    void set_pontos(int valorX1, int valorY1, int valorX2, int valorY2){
        x1 = valorX1;
        x2 = valorX2;
        y1 = valorY1;
        y2 = valorY2;
    }

    int area(){
        int base, altura;
        base = x1 - x2;
        altura = y2 - y1;
        return base * altura;
    }
};

int main(){

    Retangulo retangulo;
    int N;

    scanf("%d", &N);

    for(int i=0;i<N;i++){
        int x1, y1, x2, y2;
        char operacao;

        scanf(" %c", &operacao);

        if(operacao == 'R'){
            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
            retangulo.set_pontos(x1, y1, x2, y2);
        }else if(operacao == 'A'){
            printf("%d\n", retangulo.area());
        }
    }
}