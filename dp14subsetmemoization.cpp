 #include<iostream>
 #include<vector>
 #include<limits.h>
 using namespace std;
 // subset memoiazation
 bool subsetk(int ind,int target , vector<int>&arr){
  
  int n =arr.size();
   vector<vector<int>>dp(n,vector<int>(target+1,-1));
  if(target==0)return true ;
  if(ind==0)return (arr[0]==target);
   if(dp[ind][target]!=-1)return dp[ind][target];
  bool nottake = subsetk(ind-1,target , arr);
  bool take =false;
  if(target>=arr[ind])take =subsetk(ind-1,target-arr[ind],arr);
  return dp[ind][target]=take|nottake;  // shows that if any one subset is exists then return true 
 }

 int main(){
 vector<int>arr={1,2,3,4}; 
 
   int n =arr.size();
   if(subsetk(n-1,4,arr))cout<<"subset with the given target is found"<<endl;
   else cout<<"subset is not found "<<endl;
   

 return 0;
 }