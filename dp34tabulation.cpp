#include<bits/stdc++.h>
using namespace std;
   
  bool f(int i , int j , string&pattern ,string&text,vector<vector<bool>>&dp){
 dp[0][0]= true;
 for(int s2=1;s2<=j;s2++){dp[0][j]=false;}
 
 for (int ind = 1; ind <=i; ind++){
     int flag=true;  
    for(int ii=1;ii<=i;ii++){
         if(pattern[ii-1]!='*') {flag=false;
             break;
            }
       }
     dp[i][0]=flag;
   }
      

  for(int s1 =1;s1<=i;s1++){
    for (int s2=1; s2<=j; s2++)
    {
   if(pattern[s1-1]==text[s2-1]||pattern[s1-1]=='?'){dp[s1][s2]=dp[s1-1][s2-1];}
   else if(pattern[s1]=='*'){dp[s1][s2]=dp[s1-1][s2]||dp[s1][s2-1];}
   else dp[s1][s2]=false;
    }
    
   }
  return dp[i][j];
 }



int main(){
 string pattern ="ab*";
 string text="abdef";
 int n =pattern.size();
 int m = text.size();
  vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
 cout<<f(n-1,m-1,pattern,text,dp);


 return 0;
}




