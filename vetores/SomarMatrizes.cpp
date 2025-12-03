#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int array1[3][5], array3[3][5], soma = 0, arraysoma[3][3], arrays = 0;
	int escolha;
	do {
	cout << "---------------------\n";
	cout << " 1 - Introduzir dados\n";
	cout << " 2 - Somar Arrays	  \n";
	cout << " 3 - Subtrair arrays \n";
	cout << " 0 - Sair do programa\n";
	cout << "---------------------\n";
	cout << "Opção: ";
	cin >> escolha;
	switch (escolha) {
	case 1: 
		cout << "Diga numeros para o primeiro array1 \n";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> array1[i][j];
			}
		}
		cout << "Diga numeros para o segundo array3 \n";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> array3[i][j];
			}
			arrays++;
		}
		Sleep(2000);
		system("cls");
		break;
	case 2:
		if (arrays == 0 && char()) {
			cout << "Tem que colocar os valores antes dentro dos 2 arrays\n";
 
		} else {
		for (int i = 0; i < 3; i++) {
			cout << "|";
			for (int j = 0; j < 5; j++) {
				cout << array1[i][j] + array3[i][j] << " | ";
 
			}
			cout << endl;
			}
		}
		Sleep(2000);
		system("cls");
		break;
	case 3:
		if (arrays == 0) {
			cout << "Tem que colocar os valores antes dentro dos 2 arrays\n";
 
		}
		else {
			for (int i = 0; i < 3; i++) {
				cout << "|";
				for (int j = 0; j < 5; j++) {
					cout << array1[i][j] - array3[i][j] << " | ";
 
				}
				cout << endl;
			}
		}
		Sleep(2000);
		system("cls");
		break;
	case 0:
		break;
	default: 
		cout << "Nao existe essa opção\n";
	}
	} while (escolha != 0);
	return 0;
}
