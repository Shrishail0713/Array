#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*head[5];
void create(int count);
void print(int count);
int main()
{
    int i,n;
    n=5;  /*n is the total number of nodes */
    for(i=0;i<n;i++)
    {
         head[i]=NULL;
         create(i);
         print(i);
         printf("\n\n");
     }
    return 0;
}
void create(int count)
{
      int n2=5;  /*n2 is the number of nodes in a single linked list*/
      int j;
      struct node *temp;
      for(j=0;j<5;j++)
      {
             if(head[count]==NULL)
             {
                 temp=(struct node*)malloc(sizeof(struct node));
                 temp->data=j+5+count;
                 temp->next=NULL;
                 head[count]=temp;
             }
             else
             {
                temp->next=(struct node*)malloc(sizeof(struct node));
                 temp=temp->next;
                 temp->data=j+5+count;
                 temp->next=NULL;
             }
     }
}
void print(int count)
{
     struct node *temp;
     temp=head[count];
     while(temp!=NULL)
     {
          printf("%d->",temp->data);
          temp=temp->next;
     }
}