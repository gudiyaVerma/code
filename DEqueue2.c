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
if (q->r== q->size-1)
{
    return 1;
}
return 0;
}

void EnqueRear(struct queue *q , int val){
 if (isFull(q))
 {
     printf("queue is overflow\n");
 }
 else{
          q->r++;
          q->arr[q->r] = val;
           printf("enqued element is %d\n", val);
   }

}
void EnqueFront(struct queue *q , int val){
 
 if(q->f!=-1){
          q->f++;
          q->arr[q->f] = val;
           printf("enqued element is %d\n", val);
   }
 //printf("queue is full\n");

}
int dequeueRear(struct queue*q){
    int a= -1;
 if (isEmpty(q))
 {
     printf("queue underflow\n");
 }
 else{         
                //q->r--;
            a = q->arr[q->r];
             q->r--;
     }
          return a;

}

 int dequeueFront(struct queue*q){
    int a= -1;
 if (isEmpty(q))
 {
     printf("queue underflow\n");
 }
 else{         
            q->f++;
            a = q->arr[q->f];
     }
          return a;

}
  int main (){
    struct queue q;
     q.size= 5;
      q.r = q.f = 0;
     q.arr = (int*)malloc(q.size*sizeof(int));
 
       EnqueRear(&q, 127);
       EnqueRear(&q, 129);
       EnqueRear(&q, 2);
       EnqueRear(&q, 38); 
      /*printf("dequing the element %d\n",dequeueFront(&q));
     printf("dequing the element %d\n",dequeueFront(&q));
     printf("dequing the element %d\n",dequeueFront(&q));
     printf("dequing the element %d\n",dequeueFront(&q));
*/
       EnqueRear(&q, 12);
       EnqueRear(&q, 12);
       EnqueRear(&q, 12);
       EnqueRear(&q, 14);
          /* insertion from front using DEQueue
             EnqueFront(&q, 39);
             EnqueFront(&q, 9);
             EnqueFront(&q, 390);
             EnqueFront(&q, 30); */
      // Deletion from rear using DEQueue 
        printf("dequing the element %d\n",dequeueRear(&q));
        printf("dequing the element %d\n",dequeueRear(&q));
        printf("dequing the element %d\n",dequeueRear(&q));
        printf("dequing the element %d\n",dequeueRear(&q));
// insertion from front using DEQueue
             EnqueFront(&q, 39);
             EnqueFront(&q, 9);
             EnqueFront(&q, 390);
             EnqueFront(&q, 30);
 

       /* Deltio from front using queue 
      printf("dequing the element %d\n",dequeueFront(&q));
     printf("dequing the element %d\n",dequeueFront(&q));
     printf("dequing the element %d\n",dequeueFront(&q));
     printf("dequing the element %d\n",dequeueFront(&q));
*/
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
