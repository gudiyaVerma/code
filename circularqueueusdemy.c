 #include<stdio.h>
 #include<stdlib.h> 
 
 struct queue{
 int size;
 int front;
 int rare;
 int*Q;
 };
 
 void create(struct queue*q){
 printf("enter the size of the queue ");
 scanf("%d",&q->size);
 q->Q =(int*)malloc((q->size)*sizeof(int));
 q->front =0;
 q->rare =0;
 }


 void enqueue(struct queue*q ,int x){
 if ((q->rare+1)%q->size==q->front)
 {
     printf("queue is full\n");
 }
 else{
  q->rare= (q->rare+1)%q->size;
  q->Q[q->rare]=x;
 }

 }
  int dequeue(struct queue*q){
  int x=-1;
 if (q->front==q->rare)
 {
     printf("queue is empty\n");
 }
 else{
  q->front =(q->front+1)%q->size;
  x=q->Q[q->front];
  }
  return x;
  }

  void display(struct queue  q ){
    int i = q.front+1; 
      do
      {
          printf("%d ",q.Q[i]);
          i=(i+1)%q.size;
      } while (i!=(q.rare+1)%q.size);
      
      printf("\n");
  }
    int isfull(struct queue*q){
       if ((q->rare+1)%q->size==q->front)
              return 1;
       else 
             return 0;
        }
    int isempty(struct queue*q){
   if (q->front==q->rare)
        return 1;
   else 
     return 0;
      }


  int main(){
  struct queue q;
  create(&q);
  enqueue(&q,39);
  enqueue(&q,39);
  enqueue(&q,39);
  enqueue(&q,39);
  display(q);
   printf("\n");
   printf("%d ",dequeue(&q));
    printf("%d ",dequeue(&q));
    printf("%d ",dequeue(&q));
   printf("%d ",dequeue(&q));
    printf("\n");
    enqueue(&q,78);
    enqueue(&q,78);
 enqueue(&q,78);
     display(q);
   

   return 0;
 }