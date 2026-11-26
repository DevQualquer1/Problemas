//OBI 2008 - Fase 1 - Questão: Vestibular

#include <iostream>
#include <string>
#include <vector>

int N;

int main(){
    std::cin >> N;

    int qnts = 0;

    std::string gabarito1;
    std::string gabarito2;

    std::cin >> gabarito1 >> gabarito2;

    for(size_t i = 0; i < N; i++){
        if(gabarito1[i] == gabarito2[i]){
            qnts++;
        }
    }

    std::cout << qnts;

    return 0;
}