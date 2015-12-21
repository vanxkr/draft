#include <iostream>
#include <cstdio>
#include <cstdlib>
typedef struct queue{
    int* arr;
    int front;
    int rear;
    int max_size; 
}queue;
int create_queue(queue* q, int max_size){
    q->arr = (int*)malloc(sizeof(int)*max_size);
    if(NULL == q->arr){
        return -1;
    }
    q->front = 0;
    q->rear = 0;
    q->max_size = max_size;
    return 0;
}
int full_queue(queue* q){
    return (q->front + 1)%q->max_size == q->rear;
}
int empty_queue(queue* q){
    return rear = 
}
