#include <iostream>
#include <locale>
using namespace std;
int main() {

	setlocale(LC_ALL, "Portuguese");
	int numero;
	cout << "diga um numero: \n";
	cin >> numero;
	for (int i = numero; i > -1; i--) {
		cout << "\n" << i;

	}

}
