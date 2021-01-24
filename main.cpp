#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> &mat,int rs,int re,int cs,int ce){
     
    while(rs <= re && cs <= ce){ 
    
     for(int r=rs;r<=re;r++)
         cout<<mat[r][cs]<<" ";
     
     cs++;
     for(int c=cs;c<=ce;c++)
        cout<<mat[re][c]<<" ";
    
     re--;
     for(int r=re;r>=rs;r--)
        cout<<mat[r][ce]<<" ";
      
      ce--;
      for(int c=ce;c>=cs;c--)
          cout<<mat[rs][c]<<" "; 
      
      rs++;
      
    }
    
}
int main() {
 vector<vector<int>> mat{
	    {1 ,   2 ,  3 ,  4},
        {5  ,  6 ,  7 ,  8},
        {9 ,  10 , 11,  12},
        {13 , 14 , 15 , 16}
	};
	
	int rs=0,re=mat[0].size()-1,cs=0,ce=mat.size()-1;
	display(mat,rs,re,cs,ce);
	return 0;
}
