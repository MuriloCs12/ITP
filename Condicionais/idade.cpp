#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, c, idade_camila;

    cin >> a >> b >> c;

    if (a <= b && b <= c || c <= b && b <= a) {
        idade_camila = b;
    } else if (b <= a && a <= c || c <= a && a <= b) {
        idade_camila = a;
    } else {
        idade_camila = c;
    }

    cout << idade_camila << '\n';
}   