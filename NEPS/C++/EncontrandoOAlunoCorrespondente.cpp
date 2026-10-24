#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

int main(){
    int N;
    std::cin >> N;

    std::pair<std::string, int> teste1[N];
    std::pair<std::string, int> teste2[N];

    for (size_t i = 0; i < N; i++){
        std::cin >> teste1[i].first >> teste1[i].second;
    }

    for (size_t i = 0; i < N; i++){
        std::cin >> teste2[i].first >> teste2[i].second;
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if(teste1[i].first == teste2[j].first && teste1[i].second == teste2[j].second){
                std::cout << teste1[i].first;
                return 0;
            }
        }
    }
    
    std::cout << "NONE";

    return 0;
}