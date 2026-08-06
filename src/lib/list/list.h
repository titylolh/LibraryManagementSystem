#ifndef LIST_H_
#define LIST_H_

#define LIST_OK 0
#define LIST_NULL 1
#define LIST_NO_MEMORY 2
#define LIST_EMPTY 3
#define LIST_FULL 4
#define LIST_INVALID_RANK 5

#define INITIAL_CAPACITY 20

#include <stdlib.h>
#include <stdint.h>

// TODO: Continue implementing the logic behind the copiler speed
// Select the fastest 32-bit integer type
#if defined(__WORDSIZE) && __WORDSIZE == 64
  // 64-bit CPU: use 64-bit type for speed (even for 32-bit values)
  typedef long my_fast32_t;
#elif defined(__WORDSIZE) && __WORDSIZE == 32
  // 32-bit CPU: use native 32-bit int
  typedef int my_fast32_t;
#else
  // Fallback for 8-bit micros
  typedef int my_fast32_t; // May be slow, but no better option
#endif

typedef struct list {
	void *elements;
	int size; 
	int capacity;
} List;

List* listCreate(short bytesPerElement);
// int listAdd(List* list, int rank, void ptElement);
// int listRemove(List* list, int rank, void *ptElement);
// int listGet(List* list, int rank, void *ptElement);
// int listSet(List* list, int rank, void *ptElement);
// int listSize(List* list, int rank, int *ptSize);
// int listIsEmpty(List* list, int *flag);
// void listPrint(List* list);
// int listDestroy(List** list);

#endif