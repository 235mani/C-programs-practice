#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

void main(){
    int flag=0;
    int binary[5] = {10 , 20 , 30 , 40 , 50};
    int search = 10;
    
    int first=0,last=(sizeof(binary)/sizeof(int))-1 , mid;
    
    while (first <= last)
    {
        mid = (first+last)/2;
        if (search > binary[mid])
        {
            first = mid+1;
        }
        else if (search < binary[mid])
        {
            last = mid-1;
        }
        else if (search == binary[mid]){ 
            printf("%d found at index %d",binary[mid], mid);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("element not found");
    }
}
