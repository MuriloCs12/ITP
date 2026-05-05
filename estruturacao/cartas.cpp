#include <iostream>
using namespace std;

enum Suits {
    CUPS, SPADES, GOLDS, CLUBS
};

enum Value {
    ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
};

struct Card {
    Suits suit;
    Value value;
};

struct Cards {
    int quantidade;
    Card cards[52];
};

bool verificarJogo(const Cards &cartas) {
    if (cartas.quantidade < 3) {
        return false;
    }

    for (int i = 0; i < cartas.quantidade - 2; i++) {
        Card atual = cartas.cards[i];
        Card proxima = cartas.cards[i + 1];
        Card proxima2 = cartas.cards[i + 2];

        bool mesmoNaipe = atual.suit == proxima.suit and atual.suit == proxima2.suit;
        bool emSequencia = proxima.value - atual.value == 1 and proxima2.value - atual.value == 2;

        if (atual.value == QUEEN) {
            emSequencia = proxima.value == KING and proxima2.value == ACE;
        }

        if (mesmoNaipe and emSequencia) {
            return true;
        }

        return false;
    }

}