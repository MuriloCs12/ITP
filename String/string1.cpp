#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s1, s2;

    cin >> s1 >> s2;

    if (s1.size() < 2 and s2.size() < 2) {
        cout << "Não rima";
    } else {
        int pos1 = s1.size() - 3;
        int pos2 = s2.size() - 3;

        string ultimos1 = s1.substr(pos1);
        string ultimos2 = s2.substr(pos2);

        bool rima = true;
        for (int i = 0; i < 3; i++) {
            if (toupper(ultimos1[i]) != toupper(ultimos2[i])) {
                rima = false;
                break;
            }
        }

        if (rima) {
            cout << "Rima";
        } else {
            cout << "Não rima";
        }
    }
    

    cout << endl;
    return 0;
}

