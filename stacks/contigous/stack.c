#define MAX 10

typedef enum {FALSE,TRUE} Boolean;
typedef int StackEntryType;

typedef struct stack{
    int top;
    int array[MAX];
}Stack;

void createStack(Stack *s){
    s->top=-1;
}
Boolean isEmpty(Stack *s){
    return (s->top==-1);
}
Boolean isFull(Stack *s){
    return (s->top==MAX-1);
}
StackEntryType returnTop(Stack *s){
    return s->array[s->top];
}
void push(Stack *s,StackEntryType data){
    s->top++;
    s->array[s->top]=data;
}
StackEntryType pop(Stack *s){
    StackEntryType data=s->array[s->top];
    s->top--;
    return data;
}