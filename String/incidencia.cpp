#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, word;

    getline(cin, text);

    cin >> word;

    int count = 0;
    int pos = 0;

    while (1 == 1) {
        if (text.find(word, pos) != string::npos) {
            pos = text.find(word, pos) + word.length();
            count++;
        } else break;
    }

    cout << count << endl;
}
