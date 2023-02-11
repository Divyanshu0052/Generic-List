#ifndef glist_h
#define glist_h

typedef struct glist{
    void*data; // data segment
    struct glist *next; // next addrress of the node
    
}nlist;


nlist* new_glist();
int size_glist(nlist *node); // size of list
void insert_glist(void *data, signed index);// insertion of new list in only forward
void* data_at_glist(nlist *data, int index);//position of pointer in linked list
void free_glist(void *node); // delete the list


#endif