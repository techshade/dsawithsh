#include <stdio.h>

void push(int stack[], int *top, int ele)
{
    stack[++(*top)] = ele;
}

int pop(int stack[], int *top)
{
    return stack[(*top)--];
}

int stack_empty(int stack[], int * top){
    printf("top = %d", *top);
    return (*top == -1)?1:0;
}


int main(){
    int stack[10], top = -1;

    push(stack, &top, 10);

    printf("top1 %d\n", top);

    push(stack, &top, 20);

    printf("top2 %d\n", top);

    // print the full stack

    for (int i = 0; i <= top; i++)
    {
        printf("%d\n", stack[i]);
    }


    printf("Stack empty is %d", stack_empty(stack, &top));

    // printf("%d\n", pop(stack, &top));

    return 0;
}