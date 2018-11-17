#include<stdio.h>
int as(int n){
	int sum=1,f=n;
	for(int i=2;i<f;i++)
	if(n%i==0){
		sum+=i+n/i;
		f=n/i;
	}
	if(sum==n)
	return 1;
	else
	return 0;
}
int main(){
	int a;
	scanf("%d",&a);
	int con=0;
	int s[a][2];
	for(int i=0;i<a;i++)
	for(int j=0;j<2;j++)
	scanf("%d",&s[i][j]);
	for(int i=0;i<a;i++)
	{
		for(int j=s[i][0];j<=s[i][1];j++)
		if(as(j)==1)
		con++;
		printf("%d\n",con);
	}
	
}
