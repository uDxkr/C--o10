#include <iostream>
#include <locale.h>
using namespace std;
int main() {
setlocale(LC_ALL, "Portuguese");
int dias, media, previsaom, tst=0, tst2 =0;
    cin >> media>>dias;
    for (int i = 0; i < dias; i++) {
        cin >> previsao;
        if (previsao > (media + 5)) {
            tst++;
            if (tst > tst2) {
                tst2 = tst;
            }
        }else {tst = 0;}
    }
    if (tst2 >= 6) {
    cout << "wave" << endl;
    }else {
        cout << "flat" << endl;
    }
    return 0;
}
