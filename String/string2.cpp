#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;

    getline(cin, frase);

    if (frase.front() != ' ') {
        cout << frase.front();
    }

    int pos = -1;
    bool notFinished = true;
    while (notFinished) {
        pos = frase.find(' ', pos + 1);
        if (pos == string::npos) {
            notFinished = false;
        } else {
            cout << frase[pos + 1];
        }
    }

    cout << endl;
    return 0;
}