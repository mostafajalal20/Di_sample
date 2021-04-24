#ifndef CLIENT_H
#define CLIENT_H

#include<iostream>
#include "ireader.h"
class Client
{
public:
    Client(IReader &reader);
    IReader &m_reader;
    std::string foo();
};

#endif // CLIENT_H
