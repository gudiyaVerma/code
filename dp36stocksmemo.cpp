 #include<bits/stdc++.h>
 using namespace std;
 
 // buy and sell stocks infinite number of times-
 // condition -->you can not buy or sell successively 
 // before buying again you have to check first that the prev stock has sold or not

 int f(int ind ,int buy ,int n, vector<int>&price,vector<vector<int>>&dp){
  
  if(ind==n)return 0;
  if(dp[ind][buy]!=-1)return dp[ind][buy];
  if(buy){
       return dp[ind][buy]=max((-price[ind]+f(ind+1,0,n,price,dp)),(0+f(ind+1,1,n,price,dp)));
    }
  else{
      return dp[ind][buy]=max((price[ind]+f(ind+1,1,n,price,dp)),(0+f(ind+1,0,n,price,dp)));
       }

 }

 int main(){
  vector<int>price={7,1,5,3,6,4};
  int n=price.size();
  int buy=1;
   vector<vector<int>>dp(n,vector<int>(2,-1));
   cout<<f(0,buy,n-1,price,dp);
 return 0;
 }