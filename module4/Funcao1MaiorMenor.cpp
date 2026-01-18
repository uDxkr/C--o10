#include <iostream>

#include <locale>

#include <windows.h>

#include <climits>

using namespace std;

int opcao, quantos, numero, contador = 0, media = 0, nmaior = INT_MIN, nmenor = INT_MAX;

bool dados = false;

int calcular(int n) {
    n = contador / quantos;
    return n;
}

int maior(int n) {
    if (n > nmaior) {
        nmaior = n;
    }
    return nmaior;
}
int menor(int n) {
    if (n < nmenor) {
        nmenor = n;
    }
    return nmenor;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    do {
        cout << "--------------------------------------------------------------------\n";
        cout << "-              1 - Introduzir dados                                -\n";
        cout << "-              2 - Calcular media dos numeros introduzidos         -\n";
        cout << "-              3 - Encontrar o numero maior                        -\n";
        cout << "-              4 - encontar numero menor                           -\n";
        cout << "-              0 - sair do programa                                -\n";
        cout << "--------------------------------------------------------------------\n";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            Sleep(350);
            system("cls");
            contador = 0;
            nmaior = INT_MIN;
            nmenor = INT_MAX;
            cout << "Quantos numeros quer introduzir?\n";
            cin >> quantos;
            cout << "Ok entroduza " << quantos << " numeros\n";
            for (int i = 0; i < quantos; i++) {
                cin >> numero;
                contador += numero;
                dados = true;
                maior(numero);
                menor(numero);
            }
           cout << contador;
            break;
        case 2:
            Sleep(350);
            system("cls");
            if (dados) {
                cout << "Voce selecionou a opção 2 entao vamos calcular a media dos numeros que tu inseriste: \n ";
                media = calcular(numero);
                cout << "A media dos numeros introduzidos e: " << media << "\n";
            }else {
                cout << "Erro... Primeiro tens que introduzir os dados. Opção 1\n";
            }
            break;
        case 3:
            Sleep(350);
            system("cls");
            if (dados) {
                cout << "Voce selecionou a opção 3 vamos verificar quale o numero maior!!\n";
                cout << " ";
                cout << "O numero maior e: " << maior(nmaior) << " \n";
            }else {
                cout << "Erro... Primeiro tens que introduzir os dados. Opção 1\n";
            }
            break;
        case 4:
            Sleep(350);
            system("cls");
            if (dados) {
                cout << "Voce selecionou a opção 4 vamos verificar quale o numero menor!!\n";
                cout << " ";
                cout << "O numero menor e: " << menor(nmenor) << "\n ";
            }else {
                cout << "Erro... Primeiro tens que introduzir os dados. Opção 1\n";
            }
            break;
        case 0:
            break;
        default:
            system("cls");
            Sleep(250);
            cout << "Erro... Opções de 1 a 3\n";
            break;
        }
    } while (opcao != 0);
    cout << "Saindo do programa...";
}
 
