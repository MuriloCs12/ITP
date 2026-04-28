#include <iostream>
using namespace std;

int main() {

    int linhas, colunas;

    cin >> linhas >> colunas;

    int matrizA[linhas][colunas], matrizB[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) cin >> matrizA[i][j];
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) cin >> matrizB[i][j];
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matrizA[i][j] + matrizB[i][j] << '\t';
        }
        cout << '\n';
    }

    return 0;
}