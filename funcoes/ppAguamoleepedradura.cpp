#include <iostream>
using namespace std;

int consequenia(char seq[]) {
    int max = 0;
    int atual = 0;
    for (int i = 0; seq[i] != NULL; i++) {
        if (seq[i] == '1') {
            atual++;
        }
        else {
            if (atual > max) {
                max = atual;
            }
            atual = 0;
        }
    }
    if (atual > max) {
        max = atual;
    }
    return max;
}

int main() {
    static char sq[10000000];
    int numero;
     cin >> sq >> numero;
    int max = consequenia(sq);
    int suces = 0;
    for (int i = 0; i < numero; i++) {
        int dific;
		cin >> dific;
        if (max > dific) {
            suces++;
        }
    }

    std::cout << suces << endl;

    return 0;
}
/*
11110000110100011111000111110111101111111110111101111111101
6
2
6
11
7
9
8
*/
