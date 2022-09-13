 #include<bits/stdc++.h>
 using namespace std;

 // longest increasing subsequence {10,9,2,5,3,7,101,18}-{2,3,7,101}-length-4
 int f(int ind , int prev_ind,vector<int>&arr,int n,vector<vector<int>>&dp){

 for(int i =n-1;i>=0;i++){
  for(int j =n;j>=0;j++){
              
      int nottake = 0+dp[i+1][j];
         int take=INT_MIN;
          if(arr[i]>arr[j]){
            take= 1+dp[i+1][i];
          }
  dp[ind][prev_ind+1]=max(nottake,take);
  }
   }
           return dp[ind][prev_ind+1];
 }

 int main(){
 vector<int>arr={10,9,2,5,3,7,101,18};
 int n=arr.size();
 int prev_ind;
 vector<vector<int>>dp(n,vector<int>(n+1,0));
 cout<<f(0,-1,arr,n,dp);
 return 0;
 }