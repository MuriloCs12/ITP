#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cin >> word;
    
    int count = 0; 
    for (char letter : word) {
        string vogals = "aeiouAEIOU";
        if (vogals.find(letter) != string::npos) {
            count++;
        }
    }

    cout << count << endl;
}