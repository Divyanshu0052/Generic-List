#include<stdio.h>
#include "glist.h"
#include<stdlib.h>

nlist *head = NULL;

nlist *new_glist() // creating the new Linked list
{
    nlist *link = (nlist*)malloc(sizeof(nlist));
    link ->  data = NULL;
    link-> next = head;
    head = link;
    return link;
} ;

int size_genlist(nlist *node)   // Returns the size of the Linked list
{
    int size =0;
    while(node!=NULL){
        node= node -> next;
        size++;
    }
    return size;

};
void insert_glist(void*value , signed index) // insertion of the node in the genric linked list
{
    nlist *link = (nlist*)malloc(sizeof(nlist));
    link -> next = NULL;
    link -> data = value;
    nlist *temp = head;
    if (index == 0){
        temp -> data = value;
    }

    else if(index == -1){
        while((temp->next)!= NULL) temp = temp->next;
    }

    else {
        while(--index){
           temp = temp -> next;
        }
    }

    link -> next = temp -> next;
    temp -> next = link;
}; 

void* data_at_glist(nlist* data, int index)  // Data at genlist 
{  
    nlist* temp = data;

    if (index == (-1)){
        while((temp -> next)!= NULL) temp = temp -> next;
    }

    else{
        while(--index){
           temp = temp -> next;
        }
    }
    return temp -> data;
}; 
 
void free_glist(void*node) // removing a node from the linked list
{
    nlist* temp;
    while ((head->next)!=NULL){
        temp = head;
        head = head -> next;
        free(temp);             // free the allocated memory
    }

};
