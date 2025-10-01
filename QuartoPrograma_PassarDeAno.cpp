#include <iostream>

int main()
{
    int nota;
    std::cout << "Introduza a nota que voce teve: \n";
    std::cin >> nota;
    if (nota < 0 && nota >20) {
    if (nota >= 9.5) {
        std::cout << "Voce passou de ano";
    } else {
        std::cout << "Voce Reprovou";
        }
    }
}
