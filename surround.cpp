#include<stdio.h>
#define MN 10
char e[MN][MN]={{'X','X','X','X'},{'X','O','O','X'},{'X','X','O','X'},{'X','O','X','X'}};
void df(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		if(e[i][j]=='S')
		printf("O ");
		else
		printf("X ");
		printf("\n");
	}
}
void zx(int i,int j){
	if(e[i][j]=='O')
	{
		e[i][j]='S';
		zx(i+1,j);
		zx(i-1,j);
		zx(i,j+1);
		zx(i,j-1);
	}
	
}
void as(int n){
	for(int i=0;i<n;i++){
		zx(0,i);
		zx(n-1,i);
		zx(i,0);
		zx(i,n-1); 
	}
	df(n);
}
int main(){
	as(4); 
}                                                                                                  
