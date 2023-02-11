#include "gitr.h"
#include<stdio.h>
#include<stdlib.h>


GIter* new_iter(nlist* list){
    GIter* itr = (GIter*)malloc(sizeof(GIter));
    itr -> gnode = list;
    return itr;
};

void next_iter(GIter* itr){
    nlist *temp;
    temp = itr -> gnode;
    if ((temp -> next)!= NULL) itr -> gnode = temp -> next;
    else printf("No next element present!");
};

int is_null_iter(GIter* itr){
    int isNULL;
    nlist *temp;
    temp = itr -> gnode;
    if((temp -> data)==NULL) isNULL = 1;
    else isNULL = 0;
};

void* value_at_iter(GIter* itr){
    nlist *temp = itr -> gnode;
    return temp -> data;
};

void free_iter (GIter* itr){
    itr -> gnode = NULL;
    free(itr);
};