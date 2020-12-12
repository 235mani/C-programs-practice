#include <stdio.h>
#include <conio.h>
int search(int,int,int);
int binary[5]={10,20,30,40,50};
int f = 0 , l = (sizeof(binary)/sizeof(int))-1 , key = 1 , mid;
void main(){
    search(f,l,key);
}
int search(int f,int l,int key){
    mid = (f+l)/2;
    if (f<=l)
    {
            if (key == binary[mid])
            {
                printf("found at index %d",mid);
            }
            else if (key < binary[mid])
            {
                return search(f,mid-1,key);
            }
            else if (key > binary[mid])
            {
                return search(mid+1,l,key);
            }        
    }else{
            printf("not found");
    }
}