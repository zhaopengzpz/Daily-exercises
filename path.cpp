#include<stdio.h>
#define MA 10
int qw[MA][MA],as[MA][MA];
void df(int i,int j,int k){
	if(i==0&&j==0)
	qw[i][j]=k;
	else if(i==0)
	qw[i][j]=qw[i][j-1]+k;
	else if(j==0)
	qw[i][j]=qw[i-1][j]+k;
	else{
		if(qw[i-1][j]>qw[i][j-1])
		qw[i][j]=qw[i][j-1]+k;
		else
		qw[i][j]=qw[i-1][j]+k;
	}
}
int main(){
	int n,m;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	{
		scanf("%d",&as[i][j]);
		df(i,j,as[i][j]);
	}
	printf("%d",qw[m-1][n-1]);
	return 0;
}
