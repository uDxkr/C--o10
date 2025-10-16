#include <iostream>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	int num, maior = -2147483648, menor = 2147483647;
	do {
		
		cout << "Introduz um numero: ";
		cin >> num;

		if (num > maior) {
			maior = num;
		}
		if (num < menor && num != 0) {
			menor = num;
		}

	} while (num != 0);
	cout << "Numero menor: " << maior << "\n";
	cout << "Numero maior: " << menor << "\n";

}
