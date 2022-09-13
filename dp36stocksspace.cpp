 #include<bits/stdc++.h>
 using namespace std;
 
 // buy and sell stocks infinite number of times-
 // condition -->you can not buy or sell successively 
 // before buying again you have to check first that the prev stock has sold or not

 int f(int ind ,int buy ,int n, vector<int>&price){
   int aheadbuy, aheadnotbuy,curbuy,curnotbuy;
   aheadbuy=aheadnotbuy=0;
   for(int i=n-1;i>=0;i--){
   curbuy=max((-price[i]+aheadnotbuy),(0+aheadbuy));
   curnotbuy=max((price[i]+aheadbuy),(0+aheadnotbuy));
     aheadbuy=curbuy;
     aheadnotbuy=curnotbuy;
   }
      return aheadbuy;
 }

 int main(){
  vector<int>price={7,1,5,3,6,4};
  int n=price.size();
  int buy=1;
  cout<<f(0,buy,n-1,price);
 return 0;
 }