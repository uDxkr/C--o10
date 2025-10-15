#include <iostream>
#include <locale>
#include <string>
int main() {
	setlocale(LC_ALL, "Portuguese");
	std::string dis[9] = { " Mat", "Port", "Ing", "Tic", "TLP", "ASCO", "AI", "FQ", "Cin" };
	std::string nom[9] = { " joão", "Ana", "Clara", "Paula", "ze", "antonio", "alberto", "roberto", "roberta" };
	int escolha;
	do {
		std::cout << "Qual número da disciplina queres saber\n";
		std::cin >> escolha;
		if (escolha == 0) {
			break;
		}
 
		if (escolha > 0 && escolha < 9) {
			std::cout << "A disciplina é " << dis[escolha] << " e " << "o nome do stor é " << nom[escolha ];
		}
	} while (escolha != 0);
	return 0;
}
