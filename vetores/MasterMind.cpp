#include <iostream>
#include <locale>
#include <Windows.h>
#include <io.h>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguse");
	int num[4], win[4], certo = 0, tentar=0;
	srand(time(0));
	cout << "DEBUG Variavel num[i] ";
	for (int i = 0; i < 4; i++) {
		num[i] = (rand() % 2);
		cout << num[i] << " ";
	}
	do {
		certo = 0;
		tentar++;
		cout << "Escreva 4 numeros para tentar advinhar o codigo secreto\n";
		for (int i = 0; i < 4; i++) {
			cin >> win[i];
			if (win[i] == num[i]) {
				certo++;
			}
 
		}
		cout << "Acertaste" << certo << "\n";
 
	} while (certo != 4);
	cout << "Demoraste " << tentar << " jogadas ate acertares\n";
 
}
