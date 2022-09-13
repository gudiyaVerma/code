#include<bits/stdc++.h>
using namespace std;
   
  bool f(int i , int j , string&pattern ,string&text,vector<vector<int>>&dp){
 if(i<0&&j<0)return true;
 if(i<0&&j>=0)return false;
 if(j<0&&i>=0){
   for (int ind = 0; ind <=i; ind++)
   {
         if(pattern[ind]!='*')return false;
        
   }
      return true;
 }
      if(dp[i][j]!=-1)return dp[i][j];
      
   if(pattern[i]==text[j]||pattern[i]=='?'){return dp[i][j]=f(i-1,j-1,pattern,text,dp);}
   if(pattern[i]=='*'){return dp[i][j]=f(i-1,j,pattern,text,dp)||f(i,j-1,pattern,text,dp);}
    return dp[i][j]=false;

 }



int main(){
 string pattern ="ab*";
 string text="abdef";
 int n =pattern.size();
 int m = text.size();
  vector<vector<int>>dp(n,vector<int>(m,-1));
 cout<<f(n-1,m-1,pattern,text,dp);


 return 0;
}




