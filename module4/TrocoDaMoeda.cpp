#include <iostream>
#include <Windows.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <locale>
using namespace std;
void tst(int total, int teste) {
	int emfalta = teste - total, valores[8] = { 0 }, moedas[8] = { 200,100,50,20,10,5,2,1 };
	for (int i = 0; i < 8; i++) {
		if (emfalta >= moedas[i]) {
			emfalta -= moedas[i];
			valores[i] += 1;
			i = 0;
		}
	}
	for (int i = 0; i - 8; i++) {
		cout << " | " << valores[i] << " |, ";
	}
}
void exercicio3() {
	// MC = moeda clinti
	// CP = preco do centimos
	// CC = centimo por clienti
	char continuar = 's';
	do {
		int euros = 0, centimos = 0, moedas[8] = { 200,100,50,20,10,5,2,1 }, CC = 0, MC[8], CP = 0;
		cin >> euros >> centimos;
		CP = (euros * 100) + centimos;
		for (int i = 0; i < 8; i++) {
			cin >> MC[i];
			CC += MC[i] * moedas[i];
		} if (CC >= CP) {
			tst(CP, CC);
		} else {
			for (int i = 0; i < 8; i++) {
				cout << " | " << MC[i] << " |, ";
			}
		}
		cout << endl;
		cout << "Deseja continuar (sn)\n";
		cin >> continuar;
	} while (continuar != 'n');
}
int main() {
	setlocale(LC_ALL, "Portuguese");
	exercicio3();
}
