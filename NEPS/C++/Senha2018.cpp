#include <iostream>

int main(){

    int tentativas = 0;
    
    for(int i = 0; i < 1000; i++){
        int numero;
        std::cin >> numero;
        if(numero == 2018){
            break;
        }else{
            tentativas++;
        }
    }

    std::cout << tentativas;
    
    return 0;
}