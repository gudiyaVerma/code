#include<bits/stdc++.h>
using namespace std;
   
  bool f(int i , int j , string&pattern ,string&text){
  vector<bool>prev(j+1,0),cur(j+1,0);
  prev[0]= true;
 for(int s2=1;s2<=j;s2++){prev[j]=false;}
 
   for(int s1 =1;s1<=i;s1++){
    int flag=true;  
    for(int ii=1;ii<=i;ii++){
         if(pattern[ii-1]!='*') {flag=false;
             break;
            }
       }
      cur[0]=flag;
  
   
    for (int s2=1; s2<=j; s2++)
    {
   if(pattern[s1-1]==text[s2-1]||pattern[s1-1]=='?'){cur[s2]=prev[s2-1];}
   else if(pattern[s1]=='*'){cur[s2]=prev[s2]||cur[s2-1];}
   else cur[s2]=false;
    }
    prev=cur;
   }
  return prev[j];
 }



int main(){
 string pattern ="ab*";
 string text="abdef";
 int n =pattern.size();
 int m = text.size();
  
 cout<<f(n-1,m-1,pattern,text);


 return 0;
}