#include <bits/stdc++.h>
using namespace std;

int main () {
    int r, f, c;
    string resposta;

    cin >> r >> f >> c;

    if (f > (3*r) || c < 95) {
        resposta = "diminuir";
    } else if (f < (2*r) && c > 97) {
        resposta = "aumentar";
    } else {
        resposta = "manter";
    }

    cout << resposta << '\n';
}