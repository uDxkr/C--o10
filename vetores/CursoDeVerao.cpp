#include <iostream>

using namespace std;

int main() {
    long preco; 
    int dias;
    int grupo;
    cin >> preco >> dias >> grupo;

    if (preco && dias && grupo) {
        preco = (preco * 75) / 100;
        preco = ((preco + 49) / 50) * 50;
        if (dias >= 8) {
            preco = (preco * 35) / 100;
            preco = ((preco + 49) / 50) * 50;
        }
        else if (dias >= 5) {
            preco = (preco * 60) / 100;
            preco = ((preco + 49) / 50) * 50;
        }
        if (grupo >= 4) {
            preco = (preco * 50) / 100;

            preco = ((preco + 49) / 50) * 50;
        }
        cout << preco << endl;
    }
    return 0;
}
