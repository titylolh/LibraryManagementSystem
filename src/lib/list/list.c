#include "src/lib/list/list.h"

List* listCreate(short bytesPerElement) {
    List* list = (List*)malloc(sizeof(List));
    if (list == NULL) return NULL;

    list->elements = (void *)calloc(INITIAL_CAPACITY, bytesPerElement);

    if (list->elements == NULL) {
        free(list);
        return NULL;
    }
    
    list->size = 0;
    list->capacity = INITIAL_CAPACITY;

    return list;
}
