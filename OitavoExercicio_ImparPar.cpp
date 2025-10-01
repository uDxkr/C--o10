#include <iostream>

int main()
{

    int numero = 0;
    do {
        
        std::cout << "Escreva um numero\n";
        std::cin >> numero;
        if (numero == 0) {

        }
        else if (numero % 2 == 0) {
            std::cout << "O numero e par\n";
        }
        else {
            std::cout << "Nao e impar\n";
        }
    } while (numero != 0);

    return 0;
}