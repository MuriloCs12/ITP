#include <iostream>
#include <string>
using namespace std;

const string values = "0123456789ABCDEF";

char charhex(int value) {

    return values[value];
}

string hex(int r, int g, int b) {

    int vals[3] = {r, g, b};

    string out = "#";

    for (int val: vals) {
        out += charhex(val/16);
        out += charhex(val%16);
    }

    return out;
}

int main() {

    int a,b,c;

    cin >> a >> b >> c;

    cout << hex(a, b, c) << endl;

    return 0;
}