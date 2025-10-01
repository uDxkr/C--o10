#include<iostream>

int main() {

	float num;
	std::cout << "Insere um numero\n";
	std::cin >> num;
	if (num == 0) {
		std::cout << "O numero e nulo";
	} else if (num > 0) {
		std::cout << "Numero Positivo";
	}
	else {
		std::cout << "Numero negativo";
	}
	return 0;
}
