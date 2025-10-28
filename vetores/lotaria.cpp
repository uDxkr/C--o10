#include <iostream>
#include <locale>
#include <string>
#include <time.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int lotaria[5];
    srand(time(0));
    int num, certo = 0, newnumber, rep;
    for (int i = 0; i < 5; i++) {
        do { 
                rep = false;
        newnumber = (rand() % 49) + 1;
        for(int j = 0; j < i;j++) {
            if (lotaria[j] == newnumber) {
                rep = true;
                break;
            }
          }           
        } while (rep);
        lotaria[i] = (rand() % 49) + 1;
        cout << "DEBUG NUMEROS\n" << lotaria[i] << "\n";

        cout << "diga numeros de 1 a 50: ";
        cin >> num;
        if (num > 50) {

            cout << "Numero invalido! tente dnv\n";
            i--;

        }
        else {
            if (num == lotaria[i]) {
                certo++;
            }
        }
    }

    cout << "Numeros certos = " << certo << "\n";

    for (int i = 0; i < 5; i++) {
        int tst = i;
        for (int j = i + 1; j < 5; j++) {
            if (lotaria[j] < lotaria[tst]) {
                tst = j;
            }
            if (tst != i) {
                int teste = lotaria[i];
                lotaria[i] = lotaria[tst];
                lotaria[tst] = teste;
            }
        }
    }

    //  sort(lotaria, lotaria + 5);
    cout << "Os numeros da lotaria eram: \n";
    for (int i = 0; i < 5; i++) {

        cout << lotaria[i] << "\n";
    }
    if (certo == 5) {
        cout << "parabens acertaste\n";
    } else {
        cout << "erraste tudo mano\n ";
    }
    cin.ignore();
    cin.get();

    return 0;
}
