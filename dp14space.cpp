 #include<iostream>
 #include<vector>
 #include<limits.h>
 using namespace std;
 // subset Tabulation
 bool subsetk(int n,int k, vector<int>&arr){
  
 
   vector<int>prev(k+1,0),cur(k+1,0);
  // 1st base condition 
  for(int i=0;i<n;i++){
      prev[0]=true;
      }
 // second base condition 
    if(arr[0]<=k)prev[arr[0]]=true;
  // nested for loops 
  // for every index target can be 1 to k 
  for(int ind=1;ind<n;ind++){
   cur[0]=true;
   for(int target=1;target<=k;target++){
     bool nottake = prev[target];
    bool take =false;
    if(target>=arr[ind])take =prev[target-arr[ind]];
     cur[target]=take||nottake;  

       }
     prev =cur;
 }
    return prev[k];
 
 }

 int main(){
 vector<int>arr={1,2,3,4}; 
   int k =4;
   int n =arr.size();
   if(subsetk(n,k,arr))cout<<"subset with the given target is found"<<endl;
   else cout<<"subset is not found "<<endl;
   

 return 0;
 }



