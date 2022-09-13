#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
  
 int f(int ind , int w , vector<int>&wieght, vector<int>&value,vector<vector<int>>&dp){
 if(ind==0){
 if(wieght[0]<=w)return value[0];
 else return 0;
 }
 if(dp[ind][w]!=-1)return dp[ind][w];
 int nottake =0+f(ind-1,w,wieght,value,dp);
 int take =INT_MIN;
 if(wieght[ind]<=w){take=value[ind]+f(ind-1,(w-wieght[ind]),wieght,value,dp);}
  return dp[ind][w]=max(take,nottake);

  }

 int max(vector<int>&wieght, vector<int>&value, int n , int maxweight){
 vector<vector<int>>dp(n,vector<int>(maxweight+1,-1));
 return f(n-1,maxweight,wieght,value,dp);

 }


 int main(){
 vector<int>wt={3,2,5};
 vector<int>val={30,40,60};
 int n =wt.size();
 cout<<max(wt,val,n,6);

 return 0;
}