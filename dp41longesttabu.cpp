 #include<bits/stdc++.h>
 using namespace std;

 // longest increasing subsequence {10,9,2,5,3,7,101,18}-{2,3,7,101}-length-4
 int f(int ind , int prev_ind,vector<int>&arr,int n,vector<vector<int>>&dp){

 for(int ind =n-1;ind>=0;ind--){
 for(prev_ind=ind-1;prev_ind>=-1;prev_ind--){
      
    int nottake = 0+dp[ind+1][prev_ind+1];
     int take=INT_MIN;
    if(prev_ind==-1|| arr[ind]>arr[prev_ind]){
    take= (1+dp[ind+1][ind+1]);
       }
      dp[ind][prev_ind+1]=max(nottake,take);
    }
    }
    return dp[0][-1+1];
 
 
 }

 int main(){
 vector<int>arr={10,9,2,5,3,7,101,18};
 int n=arr.size();
 int prev_ind;
 vector<vector<int>>dp(n+1,vector<int>(n+1,0));
 cout<<f(0,-1,arr,n,dp);
 return 0;
 }