#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
 int mod = (int)(1e9+7);
 int subsetk(int ind,int target , vector<int>&arr){
  int n =arr.size();
  if(target==0)return 1 ;
  if(ind==0)return (arr[0]==target);
  
  int nottake = subsetk(ind-1,target , arr);
  int take =0;
  if(target>=arr[ind])take =subsetk(ind-1,target-arr[ind],arr);
  return (take+nottake)%mod;
 }




 int main(){
 vector<int>arr={1,2,3,4}; 
    int d=4;
   int n =arr.size();
   int totsum=0;
    for (int i = 0; i < n; i++)
    {
        totsum+=arr[i];
    }
    if(totsum<0||(totsum-d)/2<0)return false;
   
   cout<<subsetk(n-1,(totsum-d)/2,arr);
  
   

 return 0;
 }