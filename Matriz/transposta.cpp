#include <iostream>
using namespace std;

int main() {

    int num_linhas, num_colunas;

    cin >> num_linhas >> num_colunas;

    int transposta[num_colunas][num_linhas];

    for (int i = 0; i < num_linhas; i++) {
        for (int j = 0; j < num_colunas; j++) cin >> transposta[j][i];
    }

    for (int i = 0; i < num_colunas; i++) {
        for (int j = 0; j < num_linhas; j++) cout << transposta[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}