#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

 bool subsetk(int ind,int target , vector<int>&arr){
  int n =arr.size();
  if(target==0)return true ;
  if(ind==0)return (arr[0]==target);
  
  bool nottake = subsetk(ind-1,target , arr);
  bool take =false;
  if(target>=arr[ind])take =subsetk(ind-1,target-arr[ind],arr);
  return take||nottake;
 }




 int main(){
 vector<int>arr={1,2,3,4}; 
 int k ;
 int n =arr.size();
 int totsum=0;
 for (int i = 0; i <n; i++)
  {
     totsum+=arr[i];
  }
    if(totsum%2) return false;
    k =totsum/2;
   if(subsetk(n,k,arr))cout<<"subset is found with equal sum"<<endl;
   else if(!subsetk(n,k,arr))cout<<"subset is not found "<<endl;
  return 0;
 }