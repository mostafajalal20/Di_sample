#include "readersocket.h"

ReaderSocket::ReaderSocket(QObject *parent) : QObject (parent)
{

}

ReaderSocket::ReaderSocket(const ReaderSocket &obj)
{
    this->m_dataReaded = obj.m_dataReaded;
}

ReaderSocket &ReaderSocket::operator =(const ReaderSocket &obj)
{
    if(this != &obj){
        this->m_dataReaded = obj.m_dataReaded;
    }
    return *this;
}

void ReaderSocket::functionGetter(std::function<void (std::string)> &&recievedFunction)
{
    m_dataReaded = &recievedFunction;
}

std::string ReaderSocket::helloWorld(std::string str)
{
    return str.append("hello world");
}
