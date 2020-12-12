#define MAX 5
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void push_element();
void pop_element();
void print_queue();
int push,pop,search;
void main(){
    int inp;
    while (1)
    {
        /* code */
    
    
    printf("1 . PUSH ELEMENT\n");
    printf("2 . POP ELEMENT\n");
    printf("3 . PRINT QUEUE\n");
    printf("4 . STOP\n");
    printf("Select your choice : ");
    scanf("%d",&inp);
    switch (inp)
    {
    case 1 :
        /* code */
        push_element();
        break;
    case 2 :
        pop_element();
        break;
    case 3 :
        print_queue();
        break;
    case 4:
        exit(1);
    default:
        printf("--------------------------------->  INVALID INPUT  !!!!!!");
        break;
    }
    }
}
int front=0 , rear=0 ;
int queue[MAX];
void push_element(){
    if (rear==MAX)
    {
        printf("---------------------------------> queue is full !!!!!!!!!!!!!!!!!! \n");
    }else{
            printf("\nenter your element to push in queue : ");
            scanf("%d",&push);
            queue[rear]=push;
            rear++;
    }
} 
void pop_element(){
    if (rear == 0)
    {
        printf("--------------------------------->  queue is empty !!!!!!!!!!!!!! \n");
    }else{
        printf("\n %d IS DELETED \n\n",queue[front]);
        rear--;
        for (int i = 0; i < rear; i++)
        {
            queue[i] = queue[i+1];
        }    
    }
    
}
void print_queue(){

    if (rear == 0)
    {
        printf("-----------------------------------> queue is empty !!!!!!!!!!!!!!");
    }
    else{
        printf("<-- |");
        for (int i = 0; i < rear; i++)
        {
            printf(" %d | ",queue[i]);
        }
        printf("<--");
        
    }
    printf("\n");
    
}