#ifndef POSITIE_H
#define POSITIE_H

#include "server.h"

class Positie: public Server {
public:
    Positie(int x, int y);
    int x() const override;
    int y() const override;
    void move(int dx, int dy) override;
private:
    int X;
    int Y;
};

#endif //POSITIE_H#pragma once
