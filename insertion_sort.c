#define MAX 6
#include <stdio.h>
#include <conio.h>
#include <time.h>

clock_t start, end;
double cpu_time_used;

void main(){
    int arr[MAX] = {50,114,10,11,6,20} , i , j;

    
    for (i = 1; i < MAX; i++)
    {
        start = clock();
        int temp = arr[i];
        for (j = i-1; j >= -1; j--)
        {
            if (j == -1)
            {
                arr[0] = temp;
            }
            else if (temp < arr[j])
            {
                arr[j+1] = arr[j];
            }
            else if (temp > arr[j])
            {
                arr[j+1] = temp;
                break;
            }   
        }
        end = clock();
    }
    
    cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
    printf("\ntime taken : %f\n",cpu_time_used);
    for (int k = 0; k < MAX; k++)
    {
        printf("%d,",arr[k]);
    }
    

}