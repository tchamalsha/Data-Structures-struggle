#include <stdio.h>

typedef enum {FALSE,TRUE} Boolean;
typedef int QueueEntryType;

typedef struct node{
    QueueEntryType data;
    struct node *next;
}Node;

typedef struct queue{
    Node *front;
    Node  *rear;
    int count;
    Boolean full;
}Queue;

void createQueue(Queue *q){
    q->front=q->rear=NULL;
    q->count=0;
    q->full=FALSE;
}
Boolean isEmpty(Queue *q){
    return (q->count=0);
}
Boolean isFull(Queue *q){
    return (q->full);
}

void insert(Queue *q,QueueEntryType data){
    Node *np;
    np=(Node *)malloc(sizeof(Node));
    if(np==NUlL){
        q->full=TRUE;
        printf("Memory full!!");
        exit(1);
    }else{
        np->data=data;
        np->next=NULL;
        if(isEmpty(q)){
            q->front=q->rear=np;
        }else{
            q->rear->next=np;
            q->rear=np;
        }
        q->count++;
    }
}

QueueEntryType remove(Queue *q){
    Node *np;
    QueueEntryType data;
    if (isEmpty(q)){
        printf("Queue is empty");
        exit(1);
    }else{
        np=q->front;
        data=np->data;
        q->front=np->next;
        free(np);
        q->count--;
        return data;
    }
}