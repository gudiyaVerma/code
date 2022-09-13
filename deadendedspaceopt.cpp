 #include<iostream>
 #include<vector>
  // recursion to memoiazation 
 using namespace std;

 int f(int n, int m , vector<vector<int>>&mat){
 vector<int>prev(n,0);
 for (int i = 0; i <n; i++)
 {
          vector<int>curr(m,0);
    for (int j = 0; j <m; j++)
    {         if(i>0&&j>0&&mat[i][j]==-1){
                   curr[j]=0;
                   continue;}
 
             if(i==0&&j==0){curr[j]=1;
             continue;}
           
             int up=0;
             int left=0;
         
         if(i>0)up = prev[j]; 
         if(j>0)left =curr[j-1];
          
         curr[j]=up+left;
    }
    prev=curr;
 }
   
 return prev[n-1];
 
 } 
 

 int deadend(int n , int m , vector<vector<int>>&mat){
  
   return f(n,m,mat);

 }

  int main(){
  vector<vector<int>>mat{{1,1,1},
                        {1,-1,1},
                         {1,2,1}};
    int n =mat.size();
    int m = mat[0].size();


  cout<<deadend(n,m,mat);
 return 0;
 }
