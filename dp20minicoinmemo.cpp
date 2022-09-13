 #include<iostream>
 #include<vector>
 #include<limits.h>
 using namespace std;
 
 int minicoin(int ind , int tar, vector<int>&coins,vector<vector<int>>&dp){
  //vector<vector<int>>dp(ind,vector<int>(tar+1,-1));
 if(ind==0){
   if(tar%coins[ind]==0)return tar/coins[ind];
   else return 1e9;
   }
   if(dp[ind][tar]!=-1)return dp[ind][tar];
 int nottake= 0+minicoin(ind-1,tar,coins,dp);
 int take =1e9;
 if(coins[ind]<=tar)take=1+minicoin(ind,tar-coins[ind],coins,dp);
 return dp[ind][tar]=min(nottake,take);
 }




 int main(){
 vector<int>coins={1,2,3};
 int n =coins.size();
 int tar =8;
 vector<vector<int>>dp(n,vector<int>(tar+1,-1));
 cout<<minicoin(n-1,tar,coins,dp);
 return 0;
 }