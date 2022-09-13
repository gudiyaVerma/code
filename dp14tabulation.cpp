 #include<iostream>
 #include<vector>
 #include<limits.h>
 using namespace std;
 // subset Tabulation
 bool subsetk(int n,int k, vector<int>&arr){
  
 
   vector<vector<bool>>dp(n,vector<bool>(k+1,false));
  // 1st base condition 
  for(int i=0;i<n;i++){
      dp[i][0]=true;
      }
 // second base condition 
    if(arr[0]<=k)dp[0][arr[0]]=true;
  // nested for loops 
  // for every index target can be 1 to k 
  for(int ind=1;ind<n;ind++){
   for(int target=1;target<=k;target++){
     bool nottake = dp[ind-1][target];
    bool take =false;
    if(target>=arr[ind])take =dp[ind-1][target-arr[ind]];
     dp[ind][target]=take||nottake;  

       }

 }
    return dp[n-1][k];
 
 }

 int main(){
 vector<int>arr={1,2,3,4}; 
   int k =4;
   int n =arr.size();
   if(subsetk(n,k,arr))cout<<"subset with the given target is found"<<endl;
   else cout<<"subset is not found "<<endl;
   

 return 0;
 }