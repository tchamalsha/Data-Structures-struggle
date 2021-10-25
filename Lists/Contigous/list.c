#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef enum {FALSE,TRUE} Boolean;
typedef int ListEntryType;

typedef struct list{
    int count;
    ListEntryType array[MAX];
}List;

void createList(List *l){
    l->count=0;
}
Boolean isEmpty(List *l){
    return (l->count=0);
}
Boolean isFull(List *l){
    return (l->count=MAX);
}

void insertEnd(List *l,ListEntryType data){
    if(isFull(l)){
        printf("List is full!!");
        exit(1);
    }else {
        l->count++;
        l->array[l->count-1]=data;
    }
}

void insert(List *l,ListEntryType data,int position){
    if(isFull(l)){
        printf("List is full!!");
        exit(1);
    }else if(position<=0 || position>count){
        printf("Invalid position!!");
        exit(1);
    }else{
        for(int i=l->count-1;i>=position-1;i--){
            l->array[i+1]=l->array[i];
        }
        l->array[position-1]=data;
        l->count++;
    }
}
ListEntryType removeEnd(List *l){
    if(isEmpty(l)){
        printf("List is empty!!");
        exit(1);
    }else {
        ListEntryType data;
        data=l->array[l->count-1];
        l->count--;
        return datal;
    }
}

ListEntryType remove(List *l,int position){
    if(isEmpty(l)){
        printf("List is empty!!");
        exit(1);
    }else if(position<=0 || position>count){
        printf("Invalid position!!");
        exit(1);
    }else{
        ListEntryType data=l->array[position-1];
        for(int i=position-1;i<count-1;i++){
            l->array[i]=l->array[i+1];
        }
        l->count--;
    }
}

void replace(List *l,ListEntryType data,int position){
    if(isEmpty(l)){
        printf("List is empty!!");
        exit(1);
    }else if(position<=0 || position>count){
        printf("Invalid position!!");
        exit(1);
    }else{
        l->array[position-1]=data;
    }
}