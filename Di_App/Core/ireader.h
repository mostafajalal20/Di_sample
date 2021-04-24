#ifndef IREADER_H
#define IREADER_H

#include<functional>
#include<iostream>
class IReader
{
public:
    explicit IReader();
    virtual ~IReader();
    virtual void functionGetter(std::function<void(std::string)>&&) = 0;
    virtual std::string helloWorld(std::string str) = 0;
};

#endif // IREADER_H
