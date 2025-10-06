#include <iostream>
#include <locale>

int main() {
	setlocale(LC_ALL, "Portuguese");


	const float sandes = 1, bolos = 0.8, refrigerante = 1.5, cafe = 0.6;
	float preco_sandes, preco_bolos, preco_refrigerante, preco_cafe;
	float sandes_venda, bolos_venda, refrigerante_venda, cafe_venda;

	std::cout << "Por qual preço vendeu as sandes? \n";
	std::cin >> preco_sandes;
	std::cout << "Por qual preço vendeu os bolos? \n";
	std::cin >> preco_bolos;
	std::cout << "Por qual preço vendeu os refrigerantes? \n";
	std::cin >> preco_refrigerante;
	std::cout << "Por qual preço vendeu os cafes? \n";
	std::cin >> preco_cafe;
	
	
	system("cls");
	std::cout << "Agora vamos ver quantos produtos voce vendeu" << std::endl; 

	std::cout << "Quantas sandes vendeu? \n";
	std::cin >> sandes_venda;
	std::cout << "Quantos bolos vendeu? \n";
	std::cin >> bolos_venda;
	std::cout << "Quantos refrigerantes vendeu? \n";
	std::cin >> refrigerante_venda;
	std::cout << "Quantos cafes vendeu? \n";
	std::cin >> cafe_venda;

	system("cls");
	std::cout << "Lucro de hoje" << std::endl;

	// Lucro com os preços originais
	//float lucro = (sandes_venda * sandes) + (bolos_venda * bolos) + (refrigerante_venda * refrigerante) + (cafe_venda * cafe);
	float lucro = ((preco_sandes-sandes) * sandes_venda) + ((preco_cafe - cafe) * cafe_venda) + ((preco_refrigerante - refrigerante) * refrigerante_venda)  
		+ ((preco_bolos - bolos) * bolos_venda);

	std::cout << "Teve um lucro de: " << lucro; std::wcout << " euros";

	return 0;
}

