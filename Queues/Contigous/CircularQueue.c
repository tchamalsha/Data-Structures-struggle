#define MAX 10

typedef enum {FALSE,TRUE} Boolean;
typedef int QueueEntryType;

typedef struct queue{
    int front;
    int rear;
    int count;
    int array[MAX];
}Queue;

void createQueue(Queue *q){
    q->front=0;
    q->rear=-1;
    q->count=0;
}

Boolean isEmpty(Queue *q){
    return (q->rear-1);
}
Boolean isFull(Queue *q){
    return (q->count==MAX);
}

void insert(Queue *q,QueueEntryType data){
    if(isFull(q)){
        printf("Queue is full!!");
        exit(1);
    }else{
        q->rear=(q->rear+1)%MAX;
        q->array[q->rear]=data;
        q->count++;
    }
}

QueueEntryType remove(Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty!");
        exit(1);
    }else{
        QueueEntryType data =q->array[q->front];
        q->front=(q->front+1)%MAX;
        q->count--;
        return data;
    }
}