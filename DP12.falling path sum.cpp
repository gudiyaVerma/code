 #include<iostream> 
 #include<vector>
 #include<limits.h>
 using namespace std;
 
 int falling(int n , int m , vector<vector<int>>&mat){
 int i,j;
 if (i==n-1)return mat[n-1][j];
 if(j<0||j>m)return 0;
 
  int up = mat[i][j]+falling(i-1,j,mat);
  int ld= mat[i][j]+falling(i-1,j-1,mat);
  int rd =mat[i][j]+falling(i-1,j+1,mat);
   return max(up,max(ld,rd));
 }

 

 int main(){
 vector<vector<int>>mat{{1,2,3},
                        {4,5,6},
                        {7,8,9}};
  int n = mat.size();
  int m = mat[0].size();
  cout<<falling(n,m,mat);
 return 0;
 }