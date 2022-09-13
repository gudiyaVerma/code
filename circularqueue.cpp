 #include<iostream>
 using namespace std;


 class queue{
 public:
 int front ;
 int rare ;
 int size;
 int* q;
 
            queue(int size);
            void enqueue(int x);
            int dequeue();
            void display();

 };
  queue::queue(int size){
  front =0;
  rare =0;
  this->size =size;
  q = new int[size];
 }

   void queue::enqueue(int x){
   if ((rare+1)%size==front)
   {
        cout<<"queue is full"<<endl;
   }
     else{
           rare =(rare+1)%size;
            q[rare]=x;
         }  
          }
    int queue::dequeue(){
   int x ;
   if (front==rare)
   {
       cout<<"queue is empty"<<endl;
   }
   else{  front =(front+1)%size;
           x=   q[front];
        
        }
     return x;
 }

   void queue::display(){
   int i =front+1;
  do
  {
      cout<<q[i]<<" ";
       i =(i+1)%size;    
  } while (i!=(rare+1)%size);
  
  }
 int main(){
 queue q(4);
  q.enqueue(45);
  q.enqueue(45);
  q.enqueue(45);
  q.enqueue(45);
  q.display();
 return 0;
 }