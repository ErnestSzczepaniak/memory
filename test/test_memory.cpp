#include "test.h"
#include "memory.h"


TEST_CASE("test_case_name")
{
    constexpr auto size = 1024*1024;

    unsigned char buffer1[size];
    unsigned char buffer2[size];
    
    m_create(0, buffer1, size);
    m_create(1, buffer2, size);
}