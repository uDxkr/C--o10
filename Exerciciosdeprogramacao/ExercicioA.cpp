#include <iostream>
#include <string>
#include <locale>
#include <algorithm>
#include <windows.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");

	int alunos[50000];
	int test;
	cin >> test;
	while (test > 0) {
		int n;
		int orden;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> alunos[i];
		}
		int post = -1;
		for (int i = 0; i < n - 1; i++) {
			if (alunos[i] > alunos[i + 1]) {
				post = i;
				break;
			}
		}
		if (post == -1) { cout << "SIM" << endl; }
		else {
			int aux = alunos[post];
			alunos[post] = alunos[post + 1];
			alunos[post + 1] = aux;
			orden = 1;
			for (int i = 0; i < n - 1; i++) {
				if (alunos[i] > alunos[i + 1]) {
					orden = 0;
					break;
				}
			}
			if (orden == 1) { cout << "SIM" << endl; }
			else { cout << "NAO" << endl; }
		}
		test = test - 1;
	}


	return 0;
}