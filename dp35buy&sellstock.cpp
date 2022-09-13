 #include<iostream>
 #include<limits.h>
 #include<vector>
 using namespace std;
 
 int f(int n, int price[]){
  int profit=0;
  int mini=price[0];
  int cost=0;
  for (int i = 1; i <=n; i++)
  {
      cost= price[i]-mini;
      profit=max(cost,profit);
       mini=min(profit,price[i]);
  }
   return profit;
  }
 
 int main(){
 int price[]={7,1,53,6,4};
 int n=5;
 
 cout<<f(n,price);
 return 0;

 }