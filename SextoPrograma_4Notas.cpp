
#include <iostream>

int main()
{
    double mat, fq, ing, pt;
    std::cout << "Que nota voce teve a matematica?\n";
    std::cin >> mat;
    std::cout << "Que nota voce teve a fisico quimica?\n";
    std::cin >> fq;
    std::cout << "Que nota voce teve a portugues?\n";
    std::cin >> pt;
    std::cout << "Que nota voce teve a ingles?\n";
    std::cin >> ing;
    double media = (mat + fq + ing + pt) / 4;
    std::cout << "A media dos seus testes e:\n" << media;
}