#include <iostream>

int main()
{
    int Maior = 0;
    float n1, n2, n3;
    std::cout << "Introduza 3 numeros\n";
    std::cin >> n1;
    std::cin >> n2;
    std::cin >> n3;

    if (n1 >= n2 && n1 >= n2) {

        Maior = n1;
    }
    else if (n2 >= n1 && n2 >= n3) {

        Maior = n2;
        
    } else {
        Maior = n3;
    }
    std::cout << Maior;
    return 0;
}

