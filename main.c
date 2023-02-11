#include <stdio.h>
#include "glist.h"
#include "gitr.h"
int main(void){
    nlist *genlist = new_glist();
    GIter *it = new_iter(genlist);

    int val1 = 10, val2 = 13, val3 = 12, val4 = 15, val5 = 16, val6 = 18;   //data input integer type 
    char ch1 = 'a', ch2 ='b',ch3 = 'c',ch4 ='d';                                     // data input  character type
    float val7 = 20.789 , val0 =3.76;                                                    // data input Float type
//Insertion of nodes in Linked list
    insert_glist(&val0,0);
    insert_glist(&val1,1);
    insert_glist(&val2,2);
    insert_glist(&ch1,3);
    insert_glist(&val3,4);
    insert_glist(&val4,5);
    insert_glist(&val5,6);
    insert_glist(&ch4,-1);
    insert_glist(&val6,7);
    insert_glist(&val7,8);
    insert_glist(&ch2,9);
    insert_glist(&ch3,10);
    //Iteration of The Generic list
    printf("Value at node 0: %f \n", *(float *)value_at_iter(it)); 
    next_iter(it); 
    printf("Value at node 1: %d \n", *(int *)value_at_iter(it)); 
    next_iter(it);
    printf("Value at node 2: %d \n", *(int *)value_at_iter(it)); 
    next_iter(it);
    printf("Value at node 3: %c \n", *(char *)value_at_iter(it)); 
    next_iter(it);
    printf("Value at node 4: %d \n", *(int *)value_at_iter(it)); 
    next_iter(it);
    printf("Value at node 5: %d \n", *(int *)value_at_iter(it)); 
    next_iter(it);
    printf("Value at node 6: %d \n", *(char *)value_at_iter(it)); 
    next_iter(it);
    printf("Value at node 7: %d \n", *(int *)value_at_iter(it));
    next_iter(it);
    printf("Value at node 8: %d \n", *(char *)value_at_iter(it)); 
    next_iter(it);
    printf("Value at node 9: %c \n", *(char *)value_at_iter(it)); 
    next_iter(it);
    printf("Value at node 10: %c \n", *(char *)value_at_iter(it)); 
    next_iter(it);
   
    
    printf("Last Node Data %c",*(char *)data_at_glist(genlist,-1));
   

    free_iter(it);
    free_glist(genlist);

    getchar();
    return 0;
}