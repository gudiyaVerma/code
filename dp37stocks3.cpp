 #include<bits/stdc++.h>
 using namespace std;
 
 // buy and sell stocks only two times.
 // condition -->you can not buy or sell successively.
 // before buying again you have to check first that the prev stock has sold or not.

 int f(int ind ,int buy ,int n,int count, vector<int>&price){
   if(count==0)return 0;
  if(ind==n)return 0;
 
  if(buy){
       return max((-price[ind]+f(ind+1,0,n,count,price)),(0+f(ind+1,1,n,count,price)));
    }
  else{
      return max((price[ind]+f(ind+1,1,n,count-1,price)),(0+f(ind+1,0,n,count,price)));
       }

 }

 int main(){        //b s  b s    where (b-buy ,s-sell)
  vector<int>price={7,1,10,3,9,4};
  int n=price.size();
  int buy=1;
  int count =2;
   cout<<f(0,buy,n-1,count,price);
 return 0;
 }