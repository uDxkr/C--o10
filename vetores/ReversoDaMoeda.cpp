#include <iostream>
#include <locale>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	string nomes[5];
	char continuar = 's';

	do {
		for (int i = 0; i < 5; i++) {
			cout << "Diga 5 nomes: \n";
			cin >> nomes[i];

		}
		for (int j = 4; j > -1; j--) {
			cout << nomes[j] << " ";
		}

		cout << "\nQuer continuar (s/n)";
		cin >> continuar;

	} while (continuar != 'n');
	cout << "fechando...";
}
