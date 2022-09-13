 #include<bits/stdc++.h>
 using namespace std;
 
 // buy and sell stocks infinite number of times-
 // condition -->you can not buy or sell successively 
 // before buying again you have to check first that the prev stock has sold or not

 int f(int ind ,int buy ,int n, vector<int>&price,vector<vector<int>>&dp){
   
 dp[n][0]=dp[n][1]=0;

  for(int i =n-1;i>=0;i--){
   for(int j=0;j<=1;j++){
        
   if(j){
     dp[i][j]=max((-price[i]+dp[i+1][0]),(0+dp[i+1][1]));
    }
  else{
       dp[i][j]=max((price[i]+dp[i+1][1]),(0+dp[i+1][0]));
       }
     }
   }
   return dp[ind][buy];


 }

 int main(){
  vector<int>price={7,1,5,3,6,4};
  int n=price.size();
  int buy=1;
   vector<vector<int>>dp(n+1,vector<int>(2,-1));
   cout<<f(0,buy,n-1,price,dp);
 return 0;
 }