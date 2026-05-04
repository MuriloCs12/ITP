#include <iostream>
using namespace std;

void recursiva(int counter) {
    if (counter != 0) {
        cout << "Diminuindo mais uma vez" << endl;
        recursiva(counter - 1);
    }
}

int main() {
    recursiva(5);
    return 0;
}