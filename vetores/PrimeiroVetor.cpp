#include <iostream>
#include <string>
using namespace std;


int main() {
	string carros[3] = { "Volvo", "BMW", "Mercedes" };
	int escolha;
	char sair = 'n';
	do {

		cout << "Digite o numero do carro: \n";
		cin >> escolha;
		if (escolha >= 0 && escolha < 3) {
			cout << "Você escolheu: " << carros[escolha] << "\n";
		}
		else {
			cout << "nao pode colocar um numero invalido";
			continue;
		}

		cout << "Deseja sair? [s/n]?";
		cin >> sair;

	} while (sair != 's' && sair != 'S');

	cout << "\nFechando...." << endl;
	return 0;
}