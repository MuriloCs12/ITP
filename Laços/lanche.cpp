#include <iostream>
using namespace std;

int main () {
    
    int n, m;

    cin >> n >> m;

    int ingredientes[n], itens[m];

    for (int i = 0; i < n; i++) {
        cout << "Digite o ingrediente de index " << i << ": ";
        cin >> ingredientes[i];
    }

    for (int j = 0; j < m; j++) {
        cout << "Digite o item de index " << j << ": ";
        cin >> itens[j];
    }

    int pratos = 0;

    for (int j = 0, i = 0; j < m; j++) {
        if (ingredientes[i] == itens[j]) {
            i++;
        }

        if (i == n) {
            pratos++;
            i = 0;
        }
    }

    cout << pratos << '\n';
}