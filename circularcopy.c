 #include<stdio.h>
 #include<stdlib.h>

 struct node{
 int data;
 struct node*next;
  }*head;
  
  void create(int A[], int n){
 struct node*t;
 struct node*last;
 head = (struct node*)malloc(sizeof(struct node));
 head->data = A[0];
 head->next = head;
 last = head;
 for (int i = 1; i < n; i++)
 {   
          t = (struct node*)malloc(sizeof(struct node));
         t->data = A[i];
       t->next = last->next;
        last->next = t;
           last = t;
 }
  
 }

 void display(struct node*h){
 
 do
 {
     printf("%d ", h->data);
      h = h->next;
 } while (h!=head);
 
 }
 void Rdisplay(struct node*h){
     static int flag=0 ;
   if(h!=head || flag ==0)
 { 
    flag = 1;
     printf("%d ", h->data);
      Rdisplay(h->next);
 } 
   flag = 0;
 }
  int length(struct node*p){
   int count = 0;
  do
  {
     count ++;
    p =p->next;
  } while (p!=head);
   return count;
 }
  void insert(struct node*p ,int pos , int element){
  struct node*t; 
  if (pos<0|| pos>length(p))
  {
      return ;
  }
  
  if(pos==0){
   t = (struct node*)malloc(sizeof(struct node));
   t->data= element;
  
            if (head==NULL)
            {
            head = t;
           head->next  = head;
           }
           else{
        
           while (p->next!= head)
           {
              p = p->next;
           }
           p->next =t;
           t->next =head;
           head = t;
                    }
           
  }
 else{
       for (int i = 0; i<pos-1; i++)
       {
           p = p->next;
       }
        t = (struct node*)malloc(sizeof(struct node));
        t->data = element;
       t->next = p->next;
       p->next = t;
 }
  }
int main (){
int A[]= {30,40, 50, 60, 70, 80, 90};
 create(A,7);
 insert(head,0,56);
 display(head);

return 0;

 }
   










