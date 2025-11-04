#include <iostream>
using namespace std;

int main() {
    int A, L, C;
    cin >> A >> L >> C;

    if (A >= 3 && (A * L * C) >= 50)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}