#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	string nome[5];
	int num, i, idades[5];

	for (i = 0; i < 5; i++) {
		cout << "diga o nome das meninas\n";
		cin >> nome[i];

		idades[i] = (rand() % 40) + 15;
	}
	cout << "Diga um numero de 1 a 5\n";
	cin >> i;
	cout << "A " << nome[i-1] << " tem " << idades[i - 1] << " anos";


}
