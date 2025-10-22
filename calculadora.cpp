#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int soma, mult, div, sub, n1, n2;
	char calculadora;

	cout << "Diga os numeros que quer fazer a conta: \n";
	cin >> n1;
	cin >> n2;
	string soma2;

	cout << "Diga se quer somar (+), mult (*), div (/) , sub (-)\n";
	cin >> calculadora;
	switch (calculadora) {

	case '+':
		soma = n1 + n2;
		cout << "A soma dos 2 numeros e: " << soma;
		break;
	case '*':
		mult = n1 * n2;
		cout << "A multiplicação dos 2 numeros e: " << mult;
		break;
	case '/':
		div = n1 / n2;
		cout << "A divisao dos 2 numeros e: " << div;
		break;
	case '-':
		sub = n1 - n2;
		cout << "A subtracao dos 2 numeros e: " << sub;
		break;
	default:
		cout << "nao nao nao";
	}


}
