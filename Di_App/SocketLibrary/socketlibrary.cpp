#include "socketlibrary.h"
#include "ireader.h"
#include "readersocket.h"

void SocketLibrary::initialReader(di::extension::runtime_injector &injector)
{
    injector.install(
        di::bind<IReader>().to<ReaderSocket>()
                );
}
