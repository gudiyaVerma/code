#include<stdio.h>
 #include<stdlib.h>
  struct node{
  int data;
   struct node *next;
   };
 void linkedlistTraversal(struct node *ptr){
 while (ptr!=NULL)
 {
      printf("element %d\n",ptr->data);
      ptr=  ptr->next;
        
 }
    printf("\n");

 }
   struct node*deleteatfirst(struct node * head){
   struct node *ptr = head;
    head = head->next;
      free(ptr);
     return head ;

 }
   struct node *deleteatbetween(struct node* head, int index){
   struct node * p = head;
    struct node *q = p->next;
     int i = 0;
    while (i != index -1)
    {
        p = p->next;
         p++;
    }
     p->next = q->next;
     free(q);
 }
   struct node*deleteatlast(struct node *head){
    struct node* ptr = head;
    struct node* q = head->next;
     while (q->next!=NULL)
     {
         q= q->next;
     }
      ptr->next = NULL;
      free(q);
     }
    struct node*deleteatnode(struct node* head , int value){
     struct node * ptr= head;
     struct node* q = ptr->next;
     while (q->data!=value && q->next !=NULL)
     {   ptr = ptr->next;
         q = q->next;
     }
     if (q->data==value)
     {
          ptr->next= q->next;
          free(q);
     }
     }
   int main(){
struct node*head;
   struct node*second;
   struct node *third;
   struct node*fourth;
   head = (struct node*)malloc(sizeof(struct node));
  second = (struct node*)malloc(sizeof(struct node));
   third = (struct node*)malloc(sizeof(struct node));
   fourth = (struct node*)malloc(sizeof(struct node));
   head->data= 5;
  head->next= second;
   
  second->data= 8;
  second->next= third;
 
   third->data= 9;
    third->next = fourth;
   
   fourth->data= 10;
    fourth->next = NULL;
    linkedlistTraversal(head);
     printf("linked list after insertion\n");
    head = deleteatfirst(head);
    linkedlistTraversal(head);


  }
 