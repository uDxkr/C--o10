#include <iostream>
#include <string>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Portuguese");
 
    float meses[12];
    string mesesnome[12] = {
        "Janeiro", "Fevereiro", "Março", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };
 
    float soma = 0, media = 0;
 
    for (int i = 0; i < 12; i++) {
        cout << "Digite a temperatura média de " << mesesnome[i] << ": ";
 
        cin >> meses[i];
 
        soma += meses[i];
    }
 
    media = soma / 12.0;
 
    cout << "\nMédia anual das temperaturas: " << media << "°C\n\n";
    cout << "Meses com temperatura acima da média:\n";
 
    for (int i = 0; i < 12; i++) {
        if (meses[i] > media) {
            cout << mesesnome[i] << " com " << meses[i] << "°C\n";
        }
    }
 
    return 0;
}
