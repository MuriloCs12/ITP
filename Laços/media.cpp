#include <iostream>
using namespace std;

int main() {
    
    float n;

    cout << "Digite o tamanho do array: ";
    cin >> n;

    float valores[n];

    for (int i = 0; i < n; i++) {
        cout << "Digite o valor de índice " << i << ": ";
        cin >> valores[i];
    }

    cout << "Os valores maiores que a média são: ";

    int soma = 0;

    for (float i: valores) {
        soma += i;
    }

    float media = soma/n;

    for (float i: valores) {
        if (i > media) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}