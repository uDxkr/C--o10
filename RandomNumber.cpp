#include <iostream>
#include <locale>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int RandomNumber = rand() % 100;
	int num, contador = 0;
	cout << "DEBUG RandomNumber = " << RandomNumber << "\n" << endl;
	cout << "Adivinhe o numero\n";
	do {
		cout << "digite o numero \n";
		cin >> num;
		contador++;

		if (num > RandomNumber) {
			cout << "Acima\n";
			continue;
		}
		else if (num < RandomNumber) {
			cout << "Abaixo\n";
		}


	} while (num != RandomNumber);
	cout << "Acertou\n";
	if (contador <= 5) {
		cout << "Es o rei por acertar em menos de 5 vezes\n ";
	}
	if (contador > 5 && contador < 10) {
		cout << " Parabens\n";
	}
	if (contador > 10) {
		cout << "Nao mereces os parabens\n";
	}
	return 0;
}
