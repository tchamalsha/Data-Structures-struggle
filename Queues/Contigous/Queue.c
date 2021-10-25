#define MAX 10

typedef enum {FALSE,TRUE} Boolean;
typedef int QueueEntryType;

typedef struct queue{
    int front;
    int rear;
    int count;
    QueueEntryType array[MAX];
}Queue;

void createQueue(Queue *q){
    q->front=0;
    q->rear=-1;
};

Boolean isEmpty(Queue *q){
    return (q->rear-1);
}
Boolean isFull(Queue *q){
    return (q->count==MAX-1)
}

void insert(Queue *q,QueueEntryType data){
    if(isFull(q)){
        printf("Queue is full!!");
        exit(1);
    } else{
        q->rear++;
        q->array[q->rear]=data;
        q->count++;
    }
}

QueueEntryType remove(Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty!");
        exit(1);
    }else{
        QueueEntryType data=q->array[q->front];
        q->front++;
        q->count-;
        return data;
    }
}

