#include <stdio.h>
#include <conio.h>
#define MAX 10
void main(){
    int arr[MAX] = {10,20,30,40,50,60,70,80,90,100} , flag=0 , search_key = 1090;

    for (int i = 0; i < MAX; i++)
    {
        if (arr[i] == search_key)
        {
            printf("key found at index %d",i);
            flag++;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("key not found");
    }
    
    
}