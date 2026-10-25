#include <iostream>
#include <vector>

int tomar_elixir(int qnts_frascos) {
    if (qnts_frascos >= 3) {
        return 1 + tomar_elixir(qnts_frascos - 2);
    } else if (qnts_frascos == 2) {
        return tomar_elixir(qnts_frascos + 1);
    } else {
        return 0;
    }
}

int tomar(std::vector<int>&v){
    for (size_t i = 0; i < v.size(); i++){
        if(v[i] != 0){
            std::cout << tomar_elixir(v[i]) << "\n";
        }else{
            break;
        }
    }

    return 0;
}

int preencher_vector(std::vector<int>&v){

    for (size_t i = 0; i < v.size(); i++){
        int numero_temp = 0;

        std::cin >> numero_temp;

        if(numero_temp != 0){
            v[i] = numero_temp;
        }else{
            break;
        }
    }

    return 0;
}

int main(){

    std::vector<int> v(10, 0);
    preencher_vector(v);
    tomar(v);

    return 0;
}