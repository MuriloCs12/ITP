#include <iostream>
using namespace std;

int main() {

    int n, i, j, x = 1, count = 0;

    cin >> n >> i >> j;

    while (count < n) {
        if (x % i == 0 or x % j == 0) {
            cout << x << " ";
            count += 1;
        }
        x += 1;
    }

    cout << endl;
}