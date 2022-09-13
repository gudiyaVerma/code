 #include<iostream>
 #include<limits.h>
 #include<vector>
 using namespace std;
 
 int f(int n,  vector<int>&price){
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
 vector<int>price={7,1,5,3,6,4};
 int n=price.size();
 
 cout<<f(n-1,price);
 return 0;

 }