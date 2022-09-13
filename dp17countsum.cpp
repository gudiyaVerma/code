#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

 int subsetk(int ind,int target , vector<int>&arr){
  int n =arr.size();
  if(target==0)return 1 ;
  if(ind==0)return (arr[0]==target);
  
  int nottake = subsetk(ind-1,target , arr);
  int take =0;
  if(target>=arr[ind])take =subsetk(ind-1,target-arr[ind],arr);
  return take+nottake;
 }




 int main(){
 vector<int>arr={1,2,3,4}; 
 
   int n =arr.size();
   cout<<subsetk(n-1,9,arr);
  
   

 return 0;
 }