#include <iostream>
#include <string>
#include <locale.h>
#include <algorithm>
 
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num[10] = {15,2,53,4,1,17,5,23,45,19}, troca, aux;
/*	do {
		troca = 0;
		for (int i = 0; i < 9; i++) {
 
			if (num[i] > num[i+1]) {
				troca++;
				aux = num[i];
				num[i] = num[i + 1];
				num[i + 1] = aux;
			}
 
		}
 
 
	} while(troca != 0);
 
	*/
 
	for (int i = 0; i < 9; i++) {
		int tst = i;
		for (int j = i; j < 10; j++)
			if (num[j] < num[tst]) {
				tst = j;
			} if (tst != i) {
		int	teste = num[i];
		num[i] = num[tst];
		num[tst] = teste;
		}
	}

//	sort(num, num + 10);
	for (int i = 0; i < 10; i++) {
		cout << num[i] << "\n";
	}
 
	return 0;
}
