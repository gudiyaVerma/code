 #include<bits/stdc++.h>
 using namespace std;
 
 // buy and sell stocks infinite number of times-
 // condition -->you can not buy or sell successively 
 // before buying again you have to check first that the prev stock has sold or not

 int f(int ind ,int buy ,int n, vector<int>&price){
  
  if(ind==n)return 0;
 
  if(buy){
       return max((-price[ind]+f(ind+1,0,n,price)),(0+f(ind+1,1,n,price)));
    }
  else{
      return max((price[ind]+f(ind+1,1,n,price)),(0+f(ind+1,0,n,price)));
       }

 }

 int main(){
  vector<int>price={7,1,5,3,6,4};
  int n=price.size();
  int buy=1;
   cout<<f(0,buy,n-1,price);
 return 0;
 }