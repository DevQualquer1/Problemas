//OBI 2008 - Fase 1 - Questão: OBI

#include <iostream>

int N, P;

int main(){

    std::cin >> N >> P;

    int qnts = 0;

    for(int i = 0; i < N; i++){
        int fase1, fase2;
        std::cin >> fase1 >> fase2;

        if(fase1 + fase2 >= P){
            qnts++;
        }
    }

    std::cout << qnts;

    return 0;
}