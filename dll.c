//double linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void at_end();
void atbegin();
void atposition();
int length();
void display();
void delete_by_position();
void reverse_list();
void empty_list();
void delete_by_value();
struct node{
    int data;
    struct node *next,*prev;
};
struct node* root=NULL;

void main(){

    int ch,l;
    
    while(1){
        printf("\n\n\t\t <<<double linked list>>>\n");            
        printf("1.Append\n");
        printf("2.atbegin\n");
        printf("3.atposition\n");
        printf("4.length\n");
        printf("5.display\n");
        printf("6.delete_by_position\n");
        printf("7.reverse_list\n");
        printf("8.Empty_list\n");
        printf("9.delete_by_value\n");
        printf("10.EXIT\n");

        printf("enter choice : ");
        scanf("%d",&ch);
        switch(ch){
                case 1: at_end();
                        break;
                case 2: atbegin();
                        break; 
                case 3: atposition();
                        break;
                case 4: l=length();
                        printf("\n\t\tlength of list is = %d",l);
                        break;                                                   
                case 5: display();
                        break;                    
                case 6: delete_by_position();
                        break; 
                case 7: reverse_list();
                        break;
                case 8: empty_list();
                        break;
                case 9: delete_by_value();
                        break;                         
                case 10: exit(1);  
                default:printf("\n\n!!!!!!!!!!enter valid choice!!!!!!!!");                                  
        }
    }
}

void at_end(){
        // printf("at end");
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\nenter node data : ");
        scanf("%d",&temp->data);
        temp->next=NULL;
        temp->prev=NULL;

        if (root==NULL)
        {
                root=temp;
        }else{
                struct node *p;
                p=root;
                while (p->next!=NULL)
                {
                        p=p->next;
                }
                p->next=temp;
                temp->prev=p;
        }
        printf("\n\t\tnode added successfully");
        
}

void atbegin(){
        // printf("atbegin");
        struct node *temp,*p;
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\nenter node data : ");
        scanf("%d",&temp->data);
        temp->prev=NULL;
        temp->next=NULL;
        if (root==NULL)
        {
                root = temp;
        }else{
                p=root;
                temp->next=p;
                p->prev=temp;
                root=temp;
        }
        printf("\n\t\tNode data added successfully at beginning");
        
}

void atposition(){
        // printf("atposition");
        struct node *p,*temp,*q;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->next=NULL;
        temp->prev=NULL;
        int loc,l,i=1;
        printf("\nenter location : ");
        scanf("%d",&loc);

        printf("\nenter node data : ");
        scanf("%d",&temp->data);

        l=length();
        if (loc==0)
        {
                printf("\n!!!!!! enter location other than '0' !!!!!!!!");
        }
        
        else if (loc<=l)
        {
                p=root;
                if (loc==1)
                {
                        temp->next=p;
                        p->prev=temp;
                        root=temp;
                }else{
                        while (i<(loc-1))
                        {
                                p=p->next;
                                i++;
                        }
                        q=p->next;

                        //connections
                        temp->next=q;
                        q->prev=temp;   //right node connection

                        p->next=temp;
                        temp->prev=p;   //left node connection
                }
                printf ("\t\t<<<<node added successfully>>>>");
                
        }else{
                printf("\n\n location is out of range\n");
                printf("Current length of list is = %d",l);
        }
}

int length(){
        // printf("length");
        int count=0;
        struct node *p;
        p=root;
        if (root==NULL)
        {
                return 0;
        }else{
                while (p!=NULL)
                {
                        count++;
                        p=p->next;
                }
                return count;
        }        
}

void display(){
        // printf("display");
        struct node *p;
        p=root;
        if (root==NULL)
        {
                printf("\n\t\tlist is empty");
        }else{
                printf("root");
                while (p!=NULL)
                {
                        printf("<=>%d",p->data);
                        p=p->next;
                }
        }
        
}

void delete_by_position(){
        // printf("delete");
        struct node*p,*q;
        int loc,i=1;
        p=root;
        printf("\nenter location to delete node : ");
        scanf("%d",&loc);
        if (loc==0)
        {
                printf("\n\t\tplease enter location greater then '0'");
        }else if (loc==1)
        {
                if (length()==loc)
                {
                        root=NULL;
                }else{
                        root=p->next;
                        p->next->prev=NULL;
                        free(p);
                }
                printf("\n\ndeleted\n\n");
        }
        else if(loc <= length())
        {
                while (i<loc)
                {
                        p=p->next;
                        i++;
                }
                if (loc==length())
                {
                        p->prev->next=NULL;       
                }else{
                        p->next->prev=p->prev;  //right
                        p->prev->next=p->next;  //left
                }
                
                printf("\n\ndeleted\n\n");
        }else{
                printf("\n\ngiven location not found\n\n");
        }        
}

void reverse_list(){
        struct node *q,*p;
        p=root;
        while (p!=NULL)
        {
                q=p;
                p=p->next;
        }
        printf("root");
        while (q!=NULL)
        {
                printf("<=>[%d]",q->data);
                q=q->prev;
        }
}

void empty_list(){
        if (root==NULL)
        {
                printf("list is already empty");
        }else
        {
                root=NULL;
                printf("\n\n\t\tlist nodes removed , now list is empty\n\n");
        }        
}

void delete_by_value(){
        printf("\n\ndelete by value\n\n");
        
}