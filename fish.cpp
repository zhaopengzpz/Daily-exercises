#include<stdio.h>
int as(int a,int b,int v[],int n){
	int j=0;
	int con=0;
	for(int i=a;i<=b;i++){
		for(j=0;j<n;j++){
		if((v[j]>=i*2&&v[j]<=i*10)||(i>=v[j]*2&&i<=v[j]*10))
		break;
	}
	if(j==n)
	con++;
	}
	return con;
}
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int n;
	scanf("%d",&n);
	int fishSize[n];
	for(int i=0;i<n;i++)
	scanf("%d",&fishSize[i]);
	printf("%d",as(a,b,fishSize,n));
} 
