#include <iostream>
#include <string>

int main(){

    std::string entrada;

    std::cin >> entrada;

    for (size_t i = 0; i < entrada.length(); i++){
        switch (entrada[i]){
        case '1':
            std::cout << 1;
            break;

        case '2':
        case 'A':
        case 'B':
        case 'C':
            std::cout << 2;
            break;

        case '3':
        case 'D':
        case 'E':
        case 'F':
            std::cout << 3;
            break;

        case '4':
        case 'G':
        case 'H':
        case 'I':
            std::cout << 4;
            break;

        case '5':
        case 'J':
        case 'K':
        case 'L':
            std::cout << 5;
            break;

        case '6':
        case 'M':
        case 'N':
        case 'O':
            std::cout << 6;
            break;

        case '7':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            std::cout << 7;
            break;

        case '8':
        case 'T':
        case 'U':
        case 'V':
            std::cout << 8;
            break;

        case '9':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            std::cout << 9;
            break;

        case '-':
            std::cout << '-';

        default:
            std::cout << 0;
            break;
        }
    }
        
    return 0;
}