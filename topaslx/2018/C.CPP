#include <iostream>
#include <string>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	int cupom, n, total = 0, cont = 0, valor;
	string compras[5000], lixo;
	cin >> cupom >> n;
	for (int i = 0; i < n; i++) {
		cin >> valor;
		cin.ignore();
		if (cupom >= valor) {
			cupom -= valor;
			total += valor;
			getline(cin, compras[cont]);
			cont++;
		} else { 
			getline(cin, lixo);
		}
	}
	for (int i = 0; i < cont; i++) {
		cout << compras[i] << endl;
	}
	cout << total << " " << cupom << endl;
	return 0;
}
