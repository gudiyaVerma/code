 #include<stdio.h>
 #include<stdlib.h>

 struct node{
 int data;
 struct node*next;
 };
    void linkedlistTraversal(struct node *ptr){
     while (ptr!=NULL)
     {
         printf("Element %d\n", ptr->data);
         ptr = ptr->next;
     }
        printf("\n");
     }
   // case 1 : delete the node at bignning 
    struct node*deleteatfirst(struct node *head){
      struct node *ptr = head;
        head = head->next;
         free(ptr);
        return head;
            }
    // case2 : delete the node in between 
    struct node *deleteatbetween(struct node *head, int index){
     struct node *p = head;
     struct node *q = head->next;
      for (int i = 0; i < index-1; i++)
      {
         p = p->next;
         q= q->next; 
      }
       p->next = q->next;
       free(q);
       return head;
      }
       // case 3:delete at the last
     struct node *deleteatlast(struct node *head){
     struct node * p = head;
      struct node * q = head->next;
      while (q->next !=NULL)
      {
          p = p->next;
          q = q->next;
      }
      p->next = NULL;
      free(q);
      return head;

  } 
    struct node *deleteatnode(struct node *head , int value){
    struct node *p = head;
    struct node *q= head->next;
    while (q->data!=value && q->next !=NULL)
    {
         p = p->next ;
         q= q->next;
    }
      if (q->next == value)
      {
           p->next = q->next;
           free(q);     
}
      return head;
  
  }
 int main(){
 struct node*head;
 struct node*second;
 struct node*third;
 head = (struct node*)malloc(sizeof(struct node));
 second = (struct node*)malloc(sizeof(struct node));
 third = (struct node*)malloc(sizeof(struct node));
 head->data=7;
 head->next= second;
 second->data=8;
 second->next= third;
 third->data=9;
 third->next = NULL;
   printf("linked list before deletion\n");
    linkedlistTraversal(head);
   printf("linked list after traversal\n");
 //head = deleteatfirst(head);
   //linkedlistTraversal(head);
  // case 2:
     //head = deleteatbetween(head,1);
     // linkedlistTraversal(head);
 // case 3:
  // head = deleteatlast(head);
  // linkedlistTraversal(head);
 // case 4: deleteatnode
      head= deleteatnode(head,2);
       linkedlistTraversal(head);
 return 0;
 }
