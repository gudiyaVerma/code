#include<stdio.h>
#include<stdlib.h>
  // doubly linked list is incomplete to insert a node at the biggning
 struct node{
 int data;
  struct node*next;
  struct node*previous;
 };
  void linkedlistTraversal(struct node * N1){
   struct node*ptr = N1;
 while (ptr!=NULL)
 {
     printf("Element : %d\n",ptr->data);
     ptr = ptr->next;
 }
 printf("\n");
 }
   void reverseTraversal(struct node*N4){
   struct node *ptr1 = N4;
   while (ptr1!= NULL)
   {
       printf("element : %d\n", ptr1->data);
       ptr1 = ptr1->previous;
   }
   printf("\n");
 }
     struct node*insertatfirst(struct node *N1, int data){
     struct node*p= N1;
     p->data =data;   
     p->next = N1;
     N1->previous= p->next;
     p->previous=NULL;
      N1 =p;
     return N1;
 }
  int main(){
  struct node*N1;
   struct node*N2;
  struct node*N3;
  struct node*N4;
   N1 = (struct node*)malloc(sizeof(struct node));
   N2 = (struct node*)malloc(sizeof(struct node));
   N3 = (struct node*)malloc(sizeof(struct node));
   N4 = (struct node*)malloc(sizeof(struct node));
   N1->data= 34;
   N1->next = N2;
   N1->previous= NULL;
   
   N2->data= 56;
   N2->next = N3;
   N2->previous= N1;
 
   N3->data =67;
   N3->next = N4;
   N3->previous =N2;
   
    N4->data= 50;
    N4->next= NULL;
    N4->previous = N3;
     printf(" original linked list \n");
     linkedlistTraversal(N1);
     printf("reverse linked list \n");
     reverseTraversal(N4);
      printf("doubly linked list after insertion at the firt\n");
      N1= insertatfirst(N1, 90);
       linkedlistTraversal(N1);
      return 0;
  }
 