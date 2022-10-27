/* 
 ------------------- Library Functions For Stack Implementation Using Array ------------------
*/
#include <stdlib.h>
#include <stdbool.h>

//define stack struct
struct stack
{
    int sp;
    int Size;
    char *bp;
};

typedef struct stack STACK;

//function for initializing a stack
bool InitializeStack(STACK* s, int size)
{
    s->sp = (-1);
    s->Size = size;
    s->bp = (char *)malloc(size * sizeof(char));
    if(s->bp == NULL)
      return false;
    else 
      return true;
}

//function for checking wheather the stack is empty 
bool IsEmpty(STACK* s)
{
    if(s->sp <= (-1))
      return true;
    else 
      return false;
}

//function for checking wheather the stack is full 
bool IsFull(STACK* s)
{
    if(s->sp == (s->Size - 1))
      return true;
    else 
      return false;
}

//function for insert element to the top of the stack
bool Push(STACK* s, char val)
{
    if(IsFull(s))
       return false;
    else
    {
        s->sp++;
        s->bp[s->sp] = val;
        return true;
    }
}

//function to get the top element
char Top(STACK* s)
{
    return s->bp[s->sp];
}

//function for poping out the top element
bool Pop(STACK* s)
{
    if(IsEmpty(s))
      return false;
    else
    {
        s->sp--;
        return true;
    }
}

//function for clearing the stack
void ClearStack(STACK* s)
{
    free(s->bp);
}




#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#define _INT_MAX_ 2147483647

#include <math.h>
struct stack
{
    int arr[100];
    int top;
};
struct stack *st;

void push(int c)
{
    st->top++;
    st->arr[st->top] = c;
}
int pop()
{
    int c = st->arr[st->top];
    //    printf("\nThe element popped from stack is : %d\n", c);
    st->top--;
    return c;
}
int value(int x, int y, char c)
{
    int res;
    if (c == '+')
        res = x + y;
    if (c == '-')
        res = x - y;
    if (c == '*')
        res = x * y;
    if (c == '/')
    {
        if (y != 0)
            res = (x / y);
        else
            res = _INT_MAX_;
    }
    return res;
}
int main()
{
    struct stack ptr;
    st = &ptr;
    st->top = -1;
    char exp[50];
    scanf("%s", exp);
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] >= '0' && exp[i] <= '9')
            push(exp[i] - '0');
        else
        {
            int y = pop();
            int x = pop();
            int val = value(x, y, exp[i]);
            if (val == _INT_MAX_)
            {
                printf("Math error!!\n");
                exit(0);
            }
            push(val);
        }
    }
    int ans = st->arr[st->top];
    printf("%d\n", ans);
    return 0;
}