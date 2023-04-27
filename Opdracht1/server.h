#ifndef SERVER_H
#define SERVER_H

class Server {
public:
    virtual ~Server() {}
    virtual int x() const = 0;
    virtual int y() const = 0;
    virtual void move(int dx, int dy) = 0;
};

#endif //SERVER_H#pragma once