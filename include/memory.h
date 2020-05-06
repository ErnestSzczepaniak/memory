#ifndef _memory_h
#define _memory_h

int m_create(int index, void * memory, int size);
void m_destroy(void * memory);

int m_add(void * memory, int size, void * area);
int m_used(void * memory);
int m_max(void * memory);

void * m_alloc(int index, int size);
void * m_realloc(int index, void * memory, int size);
void * m_calloc(int index, void * memory, int size);

void m_free(int index, void * memory);

#endif