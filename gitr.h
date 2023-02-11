#ifndef GITER_H
#define GITER_H
#include "glist.h"

typedef struct {
    nlist *gnode;
} GIter;


GIter* new_iter(nlist* list);
void next_iter(GIter* itr);
int is_null_iter(GIter* itr);
void* value_at_iter(GIter* itr);
void free_iter (GIter* itr);

#endif