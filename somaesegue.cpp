#include<iostream>
using namespace std;
int main() {

	int numero, quantos, soma = 0;

	cout << "Diga quantos numeros quer somar\n";
	cin >> quantos;
	/*do {
		cout << "Introduza numeros \n";
		cin >> numero;
		quantos--;
		soma = soma + numero;

	} while (quantos != 0);
	cout << "A soma te todos os numeros e:\n" << soma;
	*/

	for (int i = 1; i <= quantos; i++) {
		cout << "Introduza numeros \n ";
		cin >> numero;

		soma = soma + numero;

	}
	cout << "A soma te todos os numeros e:\n" << soma;
	return 0;
}