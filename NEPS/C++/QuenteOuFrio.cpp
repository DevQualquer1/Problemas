#include <iostream>

int main(){

    int D;
    std::cin >> D;

    if(D >= 0 && D <= 2){
        std::cout << "Fervendo";
    }else if (D >= 3 && D <= 5){
        std::cout << "Quente";
    }else if (D >= 6 && D <= 10){
        std::cout << "Morno";
    }else{
        std::cout << "Frio";
    }
    
    return 0;
}