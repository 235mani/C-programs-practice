#include <stdio.h>
#include <conio.h>
#define MAX 5
void main(){
    int arr[MAX]={16,14,05,6,8},i=0;
    printf("Before sort\n");
    for (int l = 0; l < MAX; l++)
    {
        if (l==0)
        {
            printf("[ %d,",arr[l]);
        }else if (l==(MAX-1))
        {
            printf(" %d ]",arr[l]);
        }else{
            printf(" %d,",arr[l]);
        }        
    }

    for (i; i < MAX-1; i++)
    {
        int flag = 0;
        for (int j = 0; j < MAX-(i+1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag++;
            }
            
        }
        if (flag==0)
        {
            break;
        }
        
    }
    printf("\nAfter sort \n");
    for (int k = 0; k < MAX; k++)
    {
        if (k==0)
        {
            printf("[ %d,",arr[k]);
        }else if (k==(MAX-1))
        {
            printf(" %d ]",arr[k]);
        }else{
            printf(" %d,",arr[k]);
        }        
    }
    printf("\nIn %dth iteration array is sorted",i+1);
}