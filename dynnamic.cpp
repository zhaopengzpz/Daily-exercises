#include<stdio.h>
#define MM 1000
int a[MM];
int main(){
	int n,d;
	int man=0,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&d);
		a[d]++;
		if(a[d]>man){
			x=d;
			man=a[d];
		}
	}
	printf("%d",x);
	return 0;
} 
