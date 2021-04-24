#ifndef SOCKETLIBRARY_H
#define SOCKETLIBRARY_H

#include <boost/di.hpp>
#include <boost/di/extension/providers/runtime_provider.hpp>

namespace di = boost::di;

class SocketLibrary
{

public:
    static void initialReader(di::extension::runtime_injector &injector);
};

#endif // SOCKETLIBRARY_H
