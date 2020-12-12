#define MAX 5
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void push_element();
void pop_element();
void print_stack();
int select;
void main(){

    while (1)
    {
            printf("\n\n1. push element into stack\n");
            printf("2. pop element from stack\n");
            printf("3. print elements in stack");
            printf("\n\n ----------SELECT OPTIONS------ : ");
            scanf("%d",&select);
            switch(select){
                case 1:
                    push_element();
                    break;
                case 2:
                    pop_element();
                    break;
                case 3:
                    print_stack();
                    break;
                default:
                    printf("\n\nwrong choice");
                    break;
            }
    }
}
int top=-1 , stack[MAX],elem;
void push_element(){
    if (top == MAX-1)
    {
        printf("\n\nstack is full");
    }else{
        printf("\nenter element to push into stack : ");
        scanf("%d",&elem);
        top++;
        stack[top]=elem;
    }
}
void pop_element(){
    if (top == -1)
    {
        printf("\n\n stack is empty");
    }else{
        // free(&stack[top]);
        top--;
    }
}
void print_stack(){
    if (top==-1)
    {
        printf("\n\nstack is empty");
    }else{
        for (int i = top; i >= 0; i--)
        {
            
            printf("| %d | \n",stack[i]);
        }   
    }
}