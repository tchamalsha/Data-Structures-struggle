typedef enum {FALSE,TRUE} Boolean;
typedef int StackEntryType;

typedef struct node{
    StackEntryType data;
    struct node *next;
}Node;

typedef struct stack{
    int count;
    Boolean full;
    Node top;
}Stack;

void createStack(Stack *s){
    s->top=Null;
    s->count=0;
    s->full=FALSE;
}
Boolean isEmpty(Stack *s){
    return (s->count==0);
}
Boolean isFull(Stack *s){
    return (s->full);
}
StackEntryType returnTop(Stack *s){
    return (s->top.data);
}

void push(Stack *s,StackEntryType data){
    Node *np;
    np=(Node *)malloc(sizeof(Node));
    if(np==NULL){
        s->full=TRUE;
    }else{
        np->data=data;
        np->next=s->top;
        s->top=np;
        s->count++
    }
}

StackEntryType pop(Stack *s){
    Node *np;
    np=s->top;
    StackEntryType data=np->data;
    s->top=np->next;
    s->count--;
    free(np);
    return data;
}
