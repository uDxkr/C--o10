#include <iostream>
#include <locale>
#include <windows.h>
#include <climits>
using namespace std;
int opcao, quantos, numero, contador = 0, media = 0, nmaior = INT_MIN, nmenor = INT_MAX;
bool dados = false;

int calcular(int n) {
	n = contador / quantos;
	std::cout << "Voce selecionou a opção 2 entao vamos calcular a media dos numeros que tu inseriste!\n ";
	media = calcular(numero);
	std::cout << "A media dos numeros introduzidos e: " << media << "\n";
	return n;
}
int maior(int n) {
	if (n > nmaior) {
		nmaior = n;
	}
	std::cout << "Voce selecionou a opção 3 vamos verificar quale o numero maior!!\n";
	std::cout << " ";
	std::cout << "O numero maior e: " << nmaior << " \n";
	return nmaior;
}
int menor(int n) {
	if (n < nmenor) {
		nmenor = n;
	}

	std::cout << "Voce selecionou a opção 4 vamos verificar quale o numero menor!!\n";
	std::cout << " ";
	std::cout << "O numero menor e: " << nmenor << "\n ";
	return nmenor;
}
int inserir(int contador) {
	tempo();
	contador = 0;
	nmaior = INT_MIN;
	nmenor = INT_MAX;
	std::cout << "Quantos numeros quer introduzir?\n";
	cin >> quantos;
	std::cout << "Ok entroduza " << quantos << " numeros\n";
	for (int i = 0; i < quantos; i++) {
		cin >> numero;
		contador += numero;
		dados = true;
		maior(numero);
		menor(numero);
	}
	std::cout << contador;

	return contador;
}

void menu() {
	std::cout << "--------------------------------------------------------------------\n";
	std::cout << "-              MENU                                                -\n";
	std::cout << "--------------------------------------------------------------------\n";
	std::cout << "-                                                                  -\n";
	std::cout << "-              1 - Introduzir dados                                -\n";
	std::cout << "-              2 - Calcular media dos numeros introduzidos         -\n";
	std::cout << "-              3 - Encontrar o numero maior                        -\n";
	std::cout << "-              4 - encontar numero menor                           -\n";
	std::cout << "-              0 - sair do programa                                -\n";
	std::cout << "-                                                                  -\n";
	std::cout << "--------------------------------------------------------------------\n";
	cin >> opcao;
}
void erro() {
	std::cout << "Erro... Primeiro tens que introduzir os dados. Opção 1\n";
}
void tempo() {
	Sleep(350);
	system("cls");
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	do {
		menu();
		switch (opcao)
		{
		case 1:
			tempo();
			inserir(contador);
			break;
		case 2:
			tempo();
			if (dados) {
				calcular(numero);
			} else {
				erro();
			}
			break;
		case 3:
			tempo();
			if (dados) {
				maior(nmaior);
			} else {
				erro();
			}
			break;
		case 4:
			tempo();
			if (dados) {
				menor(nmenor);
			} else {
				erro();
			}
			break;
		case 0:
			break;
		default:
			tempo();
			std::cout << "Erro... Opções de 1 a 3\n";
			break;
		}
	} while (opcao != 0);
	std::cout << "Saindo do programa...";
}