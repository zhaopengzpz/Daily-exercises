#include <stdio.h>
 #define MAXN 51
int n; 
char board[MAXN][MAXN]; 
int getMaxArea()     //蛮力法求解算法 
{ int maxArea=0;
  for (int j=0; j<n; j++)
    { int countj=1;
	   for (int i=1; i<n; i++)  //统计第j列中相同颜色相邻棋格个数   
	   { if (board[i][j]==board[i-1][j])
	        countj++;
		else
		     countj=1;
	   } 
	   if (countj>maxArea)
	       maxArea=countj;
	}  
	return maxArea;
} 
int main() { 
scanf("%d",&n);  
for (int i=0;i<n;i++)
scanf("%s",board[i]);
printf("%d\n",getMaxArea());
return 0;
} 
