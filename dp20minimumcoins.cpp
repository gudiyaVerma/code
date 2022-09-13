 #include<iostream>
 #include<vector>
 #include<limits.h>
 using namespace std;
 
 int minicoin(int ind , int tar, vector<int>&coins){
 if(ind==0){
   if(tar%coins[ind]==0)return tar/coins[ind];
   else return 1e9;
   }
 int nottake= 0+minicoin(ind-1,tar,coins);
 int take =1e9;
 if(coins[ind]<=tar)take=1+minicoin(ind,tar-coins[ind],coins);
  int ans =min(nottake,take);
  if(ans>1e9)return -1;
   
 return ans;
 }




 int main(){
 vector<int>coins={1,2,3};
 int n =coins.size();
 int tar =8;
 cout<<minicoin(n-1,tar,coins);
 return 0;
 }