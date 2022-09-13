 #include<stdio.h>
 #include<stdlib.h>
 // code is incomplete 
 // insert the node in between 
 struct node{
 int data;
 struct node*next;
 };

 void linkedlistTraversal(struct node*head){
  struct node *ptr= head;
  do
  {   printf("Element: %d\n", ptr->data);
      ptr = ptr->next;
  } while (ptr!=head);
 
 }

 struct node*insertatfirst(struct node*head, int data){
 struct node*ptr = (struct node*)malloc(sizeof(struct node));
 ptr->data = data;
 struct node *p= head->next;
 while (p->next!=head)
 {
     p = p->next;
 }
   p->next= ptr;
  ptr->next = head;
  head = ptr;
  return head;
 }
 struct node *insertinbetween(struct node*head, int data , int index){
 struct node*ptr = (struct node*)malloc(sizeof(struct node));
 struct node*p = head->next;
 while (p != head)
 {
      p=p->next;
 }
    p->next = ptr;
    ptr->next = p->next;
    return head;
}


 int main(){
 struct node*head;

 struct node*second;
 struct node*third;
 struct node*fourth;
 head = (struct node*)malloc(sizeof(struct node));
 second = (struct node*)malloc(sizeof(struct node));
 third = (struct node*)malloc(sizeof(struct node));
 fourth = (struct node*)malloc(sizeof(struct node));
 head->data = 8;
 head->next = second;
 second->data = 9; 
 second->next = third;
  third->data= 11;
  third->next = fourth;
  fourth->data= 13;
  fourth->next = head;
   printf("linked list before insertion in circular manner\n");
 linkedlistTraversal(head);
  printf("linked list after insertion in circular manner\n");
  // head = insertatfirst(head, 56);
  //linkedlistTraversal(head);
  head = insertinbetween(head, 56, 2);
   linkedlistTraversal(head);
  return 0;

 }