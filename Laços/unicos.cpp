#include <iostream>
using namespace std;

/*
Entrada: 4 5 7 2 3  Saída: 4 5 7 2 3
Entrada: 4 7 7 5 7 2 2 3 3 4  Saída: 5 
*/

int main() {
    
    int n;

    cout << "Digite o tamanho do array: ";
    cin >> n;

    int valores[n];

    for (int i = 0; i < n; i++) {
        cout << "Digite o valor de índice " << i << ": ";
        cin >> valores[i];
    }

    cout << "Os valores únicos do array são: ";



    for (int i = 0; i < n; i++) {
        bool temOutro = false;

        for (int j = 0; j < n; j++) {
            if (j != i and valores[i] == valores[j]) {
                temOutro = true;
            }
        }

        if (!temOutro) {
            cout << valores[i] << " ";
        }
    }
    
    cout << endl;

    return 0;
}