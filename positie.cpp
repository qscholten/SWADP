#include "positie.h"

Positie::Positie(int x, int y): X(x), Y(y) {
}

int Positie::x() const {
    return X;
}

int Positie::y() const {
    return Y;
}

void Positie::move(int dx, int dy) {
    X = X + dx;
    Y = Y + dy;
}