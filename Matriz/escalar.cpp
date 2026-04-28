#include <iostream>
using namespace std;

int main() {

    int linhas, colunas, inteiro;

    cin >> linhas >> colunas >> inteiro;

    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz[i][j];
            matriz[i][j] *= inteiro;
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matriz[i][j] << '\t';
        }
        cout << '\n';
    }
}