#include <iostream>
#include <locale>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	std::string meninas[5];
	std::string apelido[5];
	int escolha;
	system("title Namoradas & Apelidos");
	system("color 4f");
	
	for (int i = 0; i < 5; i++) {
		system("color d");
		system("cls");
		cout << "Diga o nome das meninas\n";
		cin >> meninas[i];
	}
	for (int j = 0; j < 5; j++) {
		system("color 4");
		system("cls");
		cout << "Diga o apelido fofo das meninas\n";
		cin >> apelido[j];
	}
	
	char sair = 'n';
	do {
		system("cls");
		system("color 5");
		cout << "Escolha o numero da menina\n";
		cin >> escolha;

		if (escolha >= 0 && escolha <= 4) {
			std::cout << "O nome da namorada nº " << escolha << " chama-se " << meninas[escolha] << " e " << "o apelido fofinho dela é:" << apelido[escolha] << "\n";
		}

		cout << "Deseja sair do programa? (s/n)\n";
		cin >> sair;

	} while (sair != 's' && sair != 'S');


}
