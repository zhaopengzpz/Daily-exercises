#include<stdio.h>
#include<string.h>
#define MAXN 100
bool x[MAXN];
int n,r;
void pr(int n){
	for(int i=1;i<=n;i++){
		if(x[i]==1)
		printf("%d  ",i);
	}
	printf("\n");
}
void backtrack(int i,int n,int r,int a){
	if(i<=n+1){
		if(a==r)
			pr(n); 
		else{
			x[i]=1;backtrack(i+1,n,r,a+1);
			x[i]=0;backtrack(i+1,n,r,a);
		}
	}
} 
int main(){
	scanf("%d",&n);
	scanf("%d",&r);
	backtrack(1,n,r,0);
	return 0;
}
