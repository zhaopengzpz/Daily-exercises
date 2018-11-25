#include<stdio.h>
#include<string.h>
#define MAXN 100
bool x[MAXN];
bool c[MAXN][MAXN];
int n,b=0;
int a[3]={1,1,1};
bool compare(){
	int sum=0,multiply=1;
	for(int i=0;i<n;i++)
	if(x[i]==1){
		sum+=a[i];
		multiply*=a[i];
	}
	if(sum>multiply)
	if(c[sum][multiply]==0)
	{
		b++;
		c[sum][multiply]=1;
	}
}
void backtrack(int i){
	if(i<n){
		x[i]=0;backtrack(i+1);
		x[i]=1;backtrack(i+1);
	}
	else
	compare();
} 
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	backtrack(0);
	printf("%d",b);
	return 0;
}
