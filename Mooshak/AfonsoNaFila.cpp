#include <iostream>
using namespace std;

int main() {
    int num_pessoas, altura = 0, altura_sup = 0, contar = 0;
    cin >> num_pessoas;

    for (int i = 0; i < num_pessoas; i++) {
        cin >> altura;
        if (altura > altura_sup) {
            contar++;
            altura_sup = altura;
        }
    }
    cout << contar << endl;
    return 0;
}