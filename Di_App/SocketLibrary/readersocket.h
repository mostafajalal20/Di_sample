#ifndef READERSOCKET_H
#define READERSOCKET_H

#include <QObject>
#include "ireader.h"
#include <iostream>
class ReaderSocket : public QObject, public IReader
{
    Q_OBJECT
public:
    explicit ReaderSocket(QObject *parent = nullptr);
    explicit ReaderSocket(const ReaderSocket& obj);
    ReaderSocket &operator =(const ReaderSocket &obj);
    // IReader interface
public:
    void functionGetter(std::function<void (std::string)> &&);

    // IReader interface
public:
    std::string helloWorld(std::string str);
private:
    std::function<void(std::string)> *m_dataReaded = nullptr;
};

#endif // READERSOCKET_H
