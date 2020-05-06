#ifdef build_platform_host

#define CATCH_CONFIG_MAIN
#include "build.h"
#include "test.h"

#else

#include "build.h"
#include "memory.h"

constexpr auto size = 1024*1024;

unsigned char buffer1[size];
unsigned char buffer2[size];

int main()
{
    m_create(0, buffer1, size);
    m_create(1, buffer2, size);

    while(1);
}

#endif
