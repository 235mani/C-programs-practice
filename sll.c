#include<stdio.h>
#include<conio.h>


void at_end();
void atbegin();
void atposition();
int length();
void display();
void delete();
struct node{
  int data;
  struct node *next;
};
struct node *root=NULL;

void main(){

    int ch,l;
    printf("single linked list\n");
    while(1){
        printf("1.Append\n");
        printf("2.atbegin\n");
        printf("3.atposition\n");
        printf("4.length\n");
        printf("5.display\n");
        printf("6.delete\n");
        printf("7.EXIT\n");

        printf("enter choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
              at_end();
              break;
            case 2: 
              atbegin();
              break; 
            case 3: 
              atposition();
              break;
            case 4: 
              l = length();
              printf("length of list = %d",l);
              printf("\n\n");
              break;                                                   
            case 5: 
              display();
              break;                    
            case 6: 
              delete();
              break;    
            case 7: 
              exit(1);  
            default:printf("enter valid choice");                                  
        }
    }
}

void at_end(){
  //printf("at end");
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("enter data = ");
  scanf("%d",&temp->data);
  temp->next=NULL;
  
  if(root==NULL){
    root=temp;
  }else{
    struct node *p;
    p=root;
    
    while(p->next != NULL){
      p = p->next;
    }
    p->next=temp;
    
  }
}

void atbegin(){
  //printf("at begin");
  struct node *temp,*p;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("\n\nenter node data : ");
  scanf("%d",&temp->data);
  temp->next=NULL;
  p=root;
  if(p==NULL){
    root=temp;
  }else{
    temp->next=p;
    root=temp;
  }
  printf("\n\nnode added at beginning\n\n");
}

void atposition(){
  struct node *p , *temp;
  int loc,i=1,l;
  printf("\n\nenter location : ");
  scanf("%d",&loc);
  
  temp=(struct node*)malloc(sizeof(struct node));
  printf("\nenter node data : ");
  scanf("%d",&temp->data);
  temp->next=NULL;
  p=root;
  l=length();
  
  if(loc==0){
    printf("\n\nenter location \n\n");
  }
  else if(loc <= l){
    if(loc==1){
      temp->next=p;
      root=temp;
    }else{
      while(i<(loc-1)){
        p=p->next;
        i++;
      }
      temp->next=p->next;
      p->next=temp;
    }
    printf("\n\n node added\n\n");
  }else{
    printf("\n\nenter valid location\n current location = %d\n\n",l);
  }
  
}

void display(){
  struct node *p;
  p=root;
  //printf("%d\n",p);
  //printf("%d\n",p->data);
  if(p==NULL){
    printf("\n\nlist is empty\n\n");
  }else{
    printf("\n\n root");
    while(p != NULL){
      printf("->[%d]",p->data);
      p=p->next;
    }
    printf("\n\n");
  }
  
}

int length(){
  
  struct node *p;
  int count=0;
  p=root;
  
  while(p!=NULL){
      count++;
      p=p->next;
  }
  return count;
}

void delete(){
  struct node *p,*q;
  int loc,i=1;
  p=root;
  printf("\nenter location to delete : ");
  scanf("%d",&loc);
  
  if(loc==0){
    printf("\please enter Location > 0\n\n");
  }
  else if(loc <= length()){
    if(loc == 1){
      root = p->next;
      p->next=NULL;
    }else{
      while(i<loc-1){
        p=p->next;
        i++;
      }
      q=p->next;
      p->next=q->next;
      q->next=NULL;
    }
    printf("\n\ndeleted\n\n");
  }else{
    printf("\n\ngiven location not found\n\n");
  }
  
}