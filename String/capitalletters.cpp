#include <iostream>
#include <string>
using namespace std;

int main() {
    string txt;

    getline(cin, txt);

    if (txt.front() != ' ')  cout << (char)toupper(txt.front());

    int pos = -1;
    for (int i = 1; i < txt.length(); i++) {
        if (txt[i - 1] == ' ') {
            cout << (char)toupper(txt[i]);
        } else {
            cout << (char)tolower(txt[i]);
        }
    }

    cout << endl;
}