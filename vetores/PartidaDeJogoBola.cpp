#include <iostream>
#include <locale>
#include <string>
 
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	int n;
	float test;
 
	string nomes[23] = {
		"Ana Clara",
		"Bruno Silva",
		"Carla Mendes",
		"Diego Souza",
		"Eduarda Lima",
		"Felipe Torres",
		"Gabriela Rocha",
		"Henrique Alves",
		"Isabela Nunes",
		"João Pedro",
		"Karen Ribeiro",
		"Lucas Martins",
		"Mariana Duarte",
		"Nicolas Freitas",
		"Olivia Farias",
		"Paulo Henrique",
		"Quezia Moura",
		"Rafael Gomes",
		"Sabrina Costa",
		"Tiago Monteiro",
		"Úrsula Barros",
		"Vinícius Prado",
		"Yara Fernandes"
	};
	int num = 0, votos[23], soma = 0;
 
	for (int p = 0; p < 23; p++) {
		votos[p] = 0;
	}
 
	do {
		if (num < 0 || num > 23) {
			cout << "O numero nao pode ser maior que 23 e nao pode ser menor que 1" << endl;
		}
		else {
			votos[num]++;
		}
		cout << "Escreva o numero do jogador: ";
		cin >> num;
 
 
	} while (num != 0);
 
	for (int i = 0; i < 23; i++) {
		soma += votos[i];
	}
	cout << "Foram contados " << (soma -1) << " votos" << endl;
 
	for (int j = 0; j < 23; j++) {
		if (votos[j] > 0) {
			 test = votos[j] * 100 / soma;
			 cout << "Jogador " << nomes[j] << " ganhou com " << test << "%" << endl;
 
		}

 
	}
}
