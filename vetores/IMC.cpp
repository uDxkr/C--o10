#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Portuguese");
    float altura[4] = {}, peso[4] = {}, soma = 0, imc = 0;
    int opcao, dados =0, pessoa = 0;
 
    do {
        cout << "--------------------------" << endl;
        cout << "1- Digitar altura e peso de 4 pessoas." << endl;
        cout << "2- Calcular IMC de um dos utilizadores." << endl;
        cout << "3 – Calcular a média dos IMC's." << endl;
        cout << "0 - Sair." << endl;
        cout << "--------------------------" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        switch (opcao) {
        case 1:
            for (int i = 0; i < 4; i++) {
                cout << "Diga a altura da " << i + 1 << " pessoa" << endl;
                cin >> altura[i];
                cout << "Diga o peso da " << i + 1 << " pessoa" << endl;
                cin >> peso[i];
            }
            dados++;
            Sleep(2000);
            system("cls");
            break;
        case 2:
            if (dados < 0) {
                cout << "Tem que colocar os dados pa\n";
            } else {
                int pessoa;
                cout << "Escolha o número da pessoa (1 a 4): ";
                cin >> pessoa;
                if (pessoa >= 1 && pessoa <= 4) {
                    float imc;
                    imc = peso[pessoa - 1] /
                        (altura[pessoa - 1] * altura[pessoa - 1]);
 
                    cout << "imc do utilixador " << pessoa << " = " << imc << endl;
                }
            }
            Sleep(2000);
            system("cls");
            break;
 
        case 3:
            if (dados < 0) {
                cout << "Tem que inserir os dados da pessoa!\n";
            }
            else {
                float soma = 0;
                for (int i = 0; i < 4; i++) {
                    float imc;
                    imc = peso[i] / (altura[i] * altura[i]);
                    soma += imc;
                }
 
                float media = soma / 4;
                cout << "A media total dos imc´s e :  " << media << endl;
            }
            Sleep(2000);
            system("cls");
            break;
        case 0:
            cout << "Sair..\n";
            break;
        default:
            system("cls");
            cout << "So pode escolher 1 2 3 ou 0\n";
        }
    } while (opcao != 0);
    return 0;
}
