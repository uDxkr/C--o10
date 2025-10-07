#include <iostream>
#include <locale>
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int numero = 0;



	do  {
		std::cout << "Escreva um numero\n";
		std::cin >> numero;

	if (numero == 0 ) {
		system("cls");
		system("color 4");
		std::cout << "Fechado o programa...\n";
		break;
	} if (numero % 3 == 0) {
		std::cout << numero << " e multiplo de 3\n";
	} else {
		std::cout << "nao e multiplo de 3\n";
	} if (numero % 5 == 0) {
		std::cout << numero << " e multiplo de 5\n";
	} else {
		std::cout << "nao e multiplo de 5\n";
	}

	} while (numero != 0 && numero != char());
	return 0;

}