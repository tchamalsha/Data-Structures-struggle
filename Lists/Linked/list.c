#include <stdio.h>
#include <stdlib.h>

typedef enum {FALSE,TRUE} Boolean;
typedef int ListEntryType;

typedef struct node{
    ListEntryType data;
    struct node *next;
}Node;

typedef struct list{
    int count;
    Node head;
    Boolean full;
}List;

void createLists(List *l){
    l->count=0;
    l->head=NULL;
    l->full=FALSE;
}

Boolean isEmpty(List *l){
    return (l->count=0);
}
Boolean isFull(List *l){
    return (l->full);
}
int listSize(Lst *l){
    return (l->count);
}
void insertEnd(List *l,ListEntryType data){
    Node *np;
    np=(Node *)malloc(sizeof(Node));
    if (np==NULL){
        printf("Memory full!!");
        l->full=TRUE;
        exit(1);
    }else{
        np->data=data;
        if(isEmpty(l)){
            l->head=np;
        }else{
            Node *temp;
            temp=l->head;
            while (temp->next){
                temp=temp->next;
            }
            temp->next=np;
            np->next=NULL;
        }
        l->count++;
    }
}
void insert(List *l,ListEntryType data,int position){
    Node *np,*temp;
    np=(Node *)malloc(sizeof(Node));
    if (np==NULL){
        printf("Memory full!!");
        l->full=TRUE;
        exit(1);
    }else if(position<=0||position>l->count){
        printf("invalid position!!");
        exit(1);
    }else{
        np->data=data;
        temp=l->head;
        for(int i=o;i<position-1;i++){
            temp=temp->next;
        }
        np->next=temp->next;
        temp->next=np;
        l->count++;
    }
}
void insertStart(List *l,ListEntryType data){
    Node *np;
    np=(Node *)malloc(sizeof(Node));
    if (np==NULL){
        printf("Memory full!!");
        l->full=TRUE;
        exit(1);
    }else{
        np->data=data;
        if(isEmpty(l)){
            l->head=np;
            np->next=NULL;
        }else{
            np->next=l->head;
            l->head=np;
        }
        l->count++;
    }
}
ListEntryType removeStart(List *l){
    Node *temp;
    if (isEmpty(l)){
        printf("List is empty");
        exit(1);
    }else{
        ListEntryType data;
        temp=l-head;
        data=temp->data;
        if(temp->next==NULL){
            l->head=NULL;
        }else{
            l->head=temp->next;
        }
        free(temp);
        l->count--;
    }
}
ListEntryType remove(List *l,int position) {
    Node *temp, *np;
    if (isEmpty(l)) {
        printf("List is empty");
        exit(1);
    } else if (position <= 0 || position > l->count) {
        printf("invalid position!!");
        exit(1);
    } else {
        ListEntryType data;
        temp = l->head;
        for (int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }
        np = temp->next;
        temp->next = np->next;
        data = np->data;
        free(np);
        l->count--;
        return data;
    }
}
ListEntryType removeEnd(List *l){
    Node *temp,*removeNode;
    if (isEmpty(l)){
        printf("List is empty");
        exit(1);
    }else {
        temp=l->head;
        while(temp->next->next){
            temp=temp->next;
        }
        removeNode=temp->next;
        ListEntryType data=removeNode->data;
        temp->next=NULL;
        free(removeNode);
        l->count--;
    }
}
void replace(List *l,int position,ListEntryType data){
    if (isEmpty(l)) {
        printf("List is empty");
        exit(1);
    } else if (position <= 0 || position > l->count) {
        printf("invalid position!!");
        exit(1);
    } else{
        Node *temp;
        temp=l->head;
        for(int i=0;i<position-1;i++){
            temp=temp->next;
        }
        temp->data=data;
    }
}