#include "memory.h"

extern "C" 
{
    #include "tlsf.h"
}

int m_create(int index, void * memory, int size)
{
    return init_memory_pool(index, size, memory);
}

void m_destroy(void * memory)
{
    destroy_memory_pool(memory);
}

int m_used(void * memory)
{
    return get_used_size(memory);
}

int m_max(void * memory)
{
    return get_max_size(memory);
}

int m_add(void * memory, int size, void * area)
{
    return add_new_area(area, size, memory);
}

void * m_alloc(int index, int size)
{
    return tlsf_malloc(index, size);
}

void * m_realloc(int index, void * memory, int size)
{
    return tlsf_realloc(index, memory, size);
}

void * m_calloc(int index, void * memory, int size)
{
    return tlsf_realloc(index, memory, size);
}

void m_free(int index, void * memory)
{
    return tlsf_free(index, memory);
}
