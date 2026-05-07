#include <iostream>
using namespace std;
int main() {
    int r, g, b, n, cont = 0, r1, g1, b1;
    cin >> r >> g >> b >> n;
    for (int i = 0; i < n; i++) {
        cin >> r1 >> g1 >> b1;
        if (r1 == r && g1 == g && b1 == b) {
            cont++;
        }
    }
    cout << cont << endl;
}
