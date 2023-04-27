#ifndef POSITIE_H
#define POSITIE_H

class Positie {
public:
    Positie(int x, int y);
    virtual ~Positie(){}
    virtual int x() const;
    virtual int y() const;
    virtual void move(int dx, int dy);
private:
    int X;
    int Y;
};

#endif //POSITIE_H