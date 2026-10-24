#include <iostream>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>

int main(){
    int N;
    std::cin >> N;

    std::vector<std::pair<std::string, int>> pilotos(N);

    for (size_t i = 0; i < N; i++){
        std::cin >> pilotos[i].first >> pilotos[i].second;
    }

    std::sort(pilotos.begin(), pilotos.end(), [](const auto& a, const auto& b) {
        if (a.second != b.second)
            return a.second > b.second;

        return a.first < b.first;
    });

    for (auto piloto : pilotos){
        std::cout << piloto.first << std::endl;
    }

    return 0;
}