#include<stdio.h>   
#include<stdlib.h>  
#define MAX 10

// stack as an array

struct stack
{
    int arr[MAX];
    int top;
};

void initstack(struct stack*);
void push(struct stack*,int item);
int pop(struct stack*);

void initstack(struct stack* s)
{
    s->top=-1;

}

void push(struct stack* s,int item)
{
    if(s->top==MAX-1)
    {
        printf("Stack is full\n");
        return;
    }
    s->top++;
    s->arr[s->top]=item;
}


int pop(struct stack* s)
{
    int data;
    if(s->top==-1)
    {
        printf("Stack is empty\n");
        return NULL;
    }
    data=s->arr[s->top];
    s->top--;
    return data;
}

int main()
{
    struct stack p;
    int n;
    initstack(&p);
    push(&p,10);
    push(&p,20);
    push(&p,40);
    push(&p,50);
    push(&p,60);
    push(&p,80);
    //push(&p,90);

    n=pop(&p);
    printf("we have got %d\n",n);
     n=pop(&p);
    printf("we have got %d\n",n);
     n=pop(&p);
    printf("we have got %d\n",n);
     n=pop(&p);
    printf("we have got %d\n",n);
     n=pop(&p);
    printf("we have got %d\n",n);
     n=pop(&p);
    printf("we have got %d\n",n);
     n=pop(&p);
    printf("we have got %d\n",n);




    return 0;

}