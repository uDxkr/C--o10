#include <iostream>

using namespace std;

int aldeias[200005];
int esq[100];
int dir[100];

int main() {
    int n, q;
    if (!(cin >> n >> q)) return 0;

    for (int i = 0; i < n; i++) {
        cin >> aldeias[i];
    }
    int t = 0;
    esq[t] = 0;
    dir[t] = n - 1;
    t = t + 1;
    while (t > 0) {
        t = t - 1;
        int ini = esq[t];
        int fim = dir[t];
        int i = ini;
        int j = fim;
        int pivo = aldeias[(ini + fim) / 2];
        while (i <= j) {
            while (aldeias[i] < pivo) i = i + 1;
            while (aldeias[j] > pivo) j = j - 1;
            if (i <= j) {
                int aux = aldeias[i];
                aldeias[i] = aldeias[j];
                aldeias[j] = aux;
                i = i + 1;
                j = j - 1;
            }
        }
        if (ini < j) {
            esq[t] = ini;
            dir[t] = j;
            t = t + 1;
        }
        if (i < fim) {
            esq[t] = i;
            dir[t] = fim;
            t = t + 1;
        }
    }
    for (int k = 0; k < q; k++) {
        int L, R;
        cin >> L >> R;
        int esq = 0;
        int dir = n - 1;
        int pos_L = n;
        while (esq <= dir) {
            int meio = (esq + dir) / 2;
            if (aldeias[meio] >= L) {
                pos_L = meio;
                dir = meio - 1;
            }
            else {
                esq = meio + 1;
            }
        }
        esq = 0;
        dir = n - 1;
        int pos_R = n;
        while (esq <= dir) {
            int meio = (esq + dir) / 2;
            if (aldeias[meio] > R) {
                pos_R = meio;
                dir = meio - 1;
            }
            else {
                esq = meio + 1;
            }
        }
        int total = pos_R - pos_L;
        cout << total << "\n";
    }
    return 0;
}
