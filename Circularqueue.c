#include<stdio.h>
#include<stdlib.h>

struct queue{
 int size;
 int f;
 int r;
 int *arr;
};

 int isEmpty(struct queue*q){
  if (q->r ==q->f)
  {
      return 1;
  }
    return 0;  
 }
 
int isFull(struct queue*q){
if ((q->r+1)%q->size== q->f)
{
    return 1;
}
return 0;
}

void Enque(struct queue *q , int val){
 if (isFull(q))
 {
     printf("queue is overflow\n");
 }
 else{
          q->r = (q->r+1)%q->size;
          q->arr[q->r] = val;
           printf("enqued element is %d\n", val);
   }

}

 int dequeue(struct queue*q){
    int a= -1;
 if (isEmpty(q))
 {
     printf("queue underflow\n");
 }
 else{         
            q->f = (q->f+1)%q->size;
            a = q->arr[q->f];
     }
          return a;

}
  int main (){
    struct queue q;
     q.size= 4;
      q.r = q.f = 0;
     q.arr = (int*)malloc(q.size*sizeof(int));
 
       Enque(&q, 12);
       Enque(&q, 12);
       Enque(&q, 12);
       Enque(&q, 12); 
      printf("dequing the element %d\n",dequeue(&q));
     printf("dequing the element %d\n",dequeue(&q));
     printf("dequing the element %d\n",dequeue(&q));
     printf("dequing the element %d\n",dequeue(&q));
       Enque(&q, 12);
       Enque(&q, 12);
       Enque(&q, 12);
       Enque(&q, 12);
   //printf("dequing the element %d\n",dequeue(&q));
    // printf("dequing the element %d\n",dequeue(&q));
     //printf("dequing the element %d\n",dequeue(&q));
     //printf("dequing the element %d\n",dequeue(&q));
       if(isEmpty(&q))
   {
       printf("queue is empty\n");
   }

   
   if (isFull(&q))
   {
       printf("queue is full\n");
   }
  
     return 0;

  }


