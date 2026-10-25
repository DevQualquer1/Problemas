#include <iostream>
#include <string>
#include <algorithm>

int main(){

    int N;

    std::string nome1;
    std::string nome2;

    std::cin >> N;
    std::cin.ignore();

    std::getline(std::cin, nome1);
    std::getline(std::cin, nome2);

    std::sort(nome1.begin(), nome1.end());
    std::sort(nome2.begin(), nome2.end());

    nome1.erase(std::remove(nome1.begin(), nome1.end(), '.'), nome1.end());
    nome1.erase(std::remove(nome1.begin(), nome1.end(), ','), nome1.end());
    nome1.erase(std::remove(nome1.begin(), nome1.end(), ' '), nome1.end());

    nome2.erase(std::remove(nome2.begin(), nome2.end(), '.'), nome2.end());
    nome2.erase(std::remove(nome2.begin(), nome2.end(), ','), nome2.end());
    nome2.erase(std::remove(nome2.begin(), nome2.end(), ' '), nome2.end());

    std::cout << ((nome1 == nome2) ? "S": "N");

    return 0;
}