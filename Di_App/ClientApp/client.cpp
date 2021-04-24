#include "client.h"


Client::Client(IReader &reader) : m_reader(reader)
{
}

std::string Client::foo()
{
    return m_reader.helloWorld("client");
}
