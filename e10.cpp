#include <stdio.h>
 #define MAXN 51
int n; 
char board[MAXN][MAXN]; 
int getMaxArea()     //����������㷨 
{ int maxArea=0;
  for (int j=0; j<n; j++)
    { int countj=1;
	   for (int i=1; i<n; i++)  //ͳ�Ƶ�j������ͬ��ɫ����������   
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
