#include<stdio.h>
#include<string.h>
#define MA 50000
int w[MA];
int a[MA];
void as(int n){
	for(int j=n-2;j>=0;j--){
		int max=0,m=0;
		for(int i=j+1;i<n;i++)
	if(a[j]>a[i])
	{
		m=w[i]+1;
		if(m>max)
		max=m;
	}
	w[j]=max;
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	as(n);
	int max=0;
	for(int i=0;i<n;i++)
	if(w[i]>max)
	max=w[i];
	printf("%d",max+1);
	return 0;
}
