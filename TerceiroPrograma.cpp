/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    
    int kmi,kmf,litrosg, distancia;
    std::cout<<"Insira os km iniciais: ";
    std::cin>>kmi;
    std::cout<<"Insira os km finais: ";
    std::cin>>kmf;
    std::cout<<"Insira os litros de gasolina gastos: ";
    std::cin>>litrosg;
    distancia = kmf - kmi;
    int consumo = (litrosg * 100) / distancia;
    
    std::cout<<"O automovel gastou " <<consumo<< " a cada 100km";

}
