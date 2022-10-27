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




//------------ Write a program to check the validity of a parenthesized arithmetic expression -----------
//  (whether the parenthesis is properly used or not).





#include <stdio.h>
#include <string.h>
// #include "StackUsingArray(char).h"

//Validator function
bool Validate(char open, char close)
{
    switch (close)
    {
        case ')':
           return (open == '(');
        case '}':
           return (open == '{');
        case ']':
           return (open == '[');
    }

    return true;
}


//main routine for validating a parenthesized expression
int main()
{
    char ex[1000]; bool status = true;
    printf("enter the expression: ");
    scanf("%s", ex);

    STACK s;
    if(!InitializeStack(&s, strlen(ex)))
    {
        printf("Not Enough memory\n");
        return 0;
    }

    for(int i=0; ex[i]!='\0'; i++)
    {
        if(ex[i]=='(' || ex[i]=='{' || ex[i]=='[')
           Push(&s,ex[i]);
        else if(ex[i]==')' || ex[i]=='}' || ex[i]==']')
        {
            char ch = Top(&s);
            if(!Pop(&s))
            {
                status = false;
                break;
            }

            if(!Validate(ch,ex[i]))
            {
                status = false;
                break;
            }
        }
    }

    if(!IsEmpty(&s))
       status = false;

    printf("Status : %s\n", (status ? "Balanced" : "Unbalanced"));


    ClearStack(&s);

    return 0;
    
}
