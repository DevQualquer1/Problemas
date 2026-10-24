#include <iostream>
#include <vector>

int main(){
    std::vector<int> v(10);

    for(int i = 0; i < v.size(); i++){
        std::cin >> v[i];
    }

    int numero;

    std::cin >> numero; 

    std::vector<int> v2;
    int quantos = 0;

    for (int i = 0; i < v.size(); i++){
        if (numero == v[i]){
            quantos++;
            v2.push_back(i);
        }
    }

    if(quantos > 0){
        std::cout << quantos << std::endl;
        for(int valores: v2){
            std::cout << valores << " "; 
        }
    }else{
        std::cout << "Mia x"; 
    }

    return 0;
}