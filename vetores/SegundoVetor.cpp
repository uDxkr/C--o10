#include <iostream>
#include <string>
#include <locale>
using namespace std;
int main() {

	setlocale(LC_ALL, "Portuguese");

	string materias[6] = { "Matematica", "Portugues", "Ingles", "Tecnica de Linguagens e programaçao", "Educaçao Fisica", "TIC" };

		char sair = 's';
		int escolha;

		do {

			cout << "Digite o numero da materia: \n";
			cin >> escolha;
			if (escolha >= 0 && escolha < 6) {
				cout << "Você escolheu: " << materias[escolha]<< "\n";
			}
			else {
				cout << "nao pode colocar um numero invalido";
				continue;
			}

			cout << "Deseja sair? [s/n]?";
			cin >> sair;

		} while (sair != 's' && sair != 'S');
		cout << "\nFechando...." << endl;
}