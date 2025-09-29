/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    int n1,n2,n3,n4,media;
    std::cout<<"Escreva 4 numeros para somar e dividir por 4: ";
    std::cin>> n1;
    std::cin>> n2;
    std::cin>> n3;
    std::cin>> n4;
    media = (n1 + n2 + n3 + n4) / 4;
    std::cout<<"A media de todos os numeros e: " <<media<< ".";
}