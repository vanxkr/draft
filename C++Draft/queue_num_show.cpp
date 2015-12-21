#include <cstdio>
#inlcude <cstdlib>
#inlcude <malloc.h>
#include <string.h>
const int max_length_name = 10;
const int cant_found = -2;
const int error = -1;
const int ok = 0;
typedef struct people{
    char name[max_length_name];
    people* next;
}people;
int get_rank(const people* peop, char* name) {
    int rank = 1;
    people* p = peop;
    while(p != NULL){
        if(0 == strcmp(p->name, name)){
            return rank;
        }
        p = p->next;
        ++ rank;
    }
    return cant_found;
}
int insert_rank(people* peop, char* name, int rank){
    people* p = pep;
    if(-1 == rank){
        while(p->next != NULL){
            ++ p;
        }
    }
    else{
        while(rank --){
            if(NULL == p->next){
                return error;   
            }
            ++p;
        }
    }
    people* tmp = (people*)malloc(sizeof(people));
    if(NULL == tmp){
        return error;
    }
    strcpy(tmp->name, name);
    tmp->next = p->next;
    p->next = tmp;
    return ok;
}
int out_rank(people* peop, char* name){
    
}
