
     #include<stdio.h>
     #include<stdlib.h> 
  
     struct node{
     int data;
     struct node*next;
     }*front =NULL,*rare =NULL;
 
   
     void enqueue(int x){
     struct node*t =(struct node*)malloc(sizeof(struct node));
      
     if (t==NULL)
     {
     printf("queue is full");
     }
     else{
                        t->data=x;
                        t->next =NULL;
                if (front==NULL)
                {
                  front =rare=t;
                }
                 else{
                        rare->next=t;
                        rare =t;
                      }
          }
                        }

       int dequeue(struct node*q){
       
        int x=-1;
       if (front==NULL)
       {
          printf("queue is empty ");
       }
       else{ q=front;
              x=front->data;
          
              front =front->next;
              free(q);
                    }
           return x;
      }
      void display(struct node*p){
        p=front;
      while (p)
     {
      printf("%d ",p->data);
      p= p->next;
     }
     printf("\n");
    
       }  


     int main(){
      struct node*q;
         enqueue(39);
         enqueue(40);
         enqueue(41);
         enqueue(42);
           display(q);
             printf("\n");
          printf("dequed element is %d", dequeue(q));
            printf("\n");
          display(q);
     return 0;
     }