#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

    double base, expoente;

    std::cin >> base >> expoente;

    std::cout << std::fixed << std::setprecision(4) << std::pow(base, expoente); 

    return 0;
}