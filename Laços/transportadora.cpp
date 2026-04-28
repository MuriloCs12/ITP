#include <iostream>
using namespace std;

int main() {

    int tipos, pacotesqtd;

    cin >> tipos >> pacotesqtd;

    int frota[tipos];
    int pacotes[pacotesqtd];
    int caminhao[pacotesqtd];
    bool carregados[pacotesqtd];
    bool vai_sobrar;


    for (int i = 0; i < tipos; i++) {
        cin >> frota[i];
    }

    for (int i = 0; i < pacotesqtd; i++) {
        cin >> pacotes[i];
        carregados[i] = false;
    }

    bool carregou_algum_pacote = false;

    do {
        carregou_algum_pacote = false;
        int caminhao_atual = tipos - 1;
        int capacidade = frota[caminhao_atual];
        int enviados = 0;

        for (int i = 0; i < pacotesqtd; i++) {
            if (pacotes[i] <= capacidade and carregados[i] == false) {
                cout << i << ' ';
                carregados[i] = true;

                capacidade -= pacotes[i];

                caminhao[enviados] = i;
                enviados++;

                carregou_algum_pacote = true;
            }
        }

        if (capacidade > 0) {
            int total_carregado = frota[caminhao_atual] - capacidade;
            for (int i = 0; i < caminhao_atual; i++) {
                if (total_carregado <= frota[i]) {
                    caminhao_atual = i;
                }
            }
        }

        if (carregou_algum_pacote) {
            cout << caminhao_atual << ": ";
            for (int i = 0; i < enviados; i++) {
                cout << caminhao[i] << ' ';
            }
        }

        
        cout << endl;
    } while (carregou_algum_pacote);

    if (vai_sobrar) {
        cout << ": ";
        for (int i = 0; i < pacotesqtd; i++) {
            if (carregados[i] == false) {
                cout << i << ' ';
            }   
        }
        cout << endl;
    }
    return 0;
}