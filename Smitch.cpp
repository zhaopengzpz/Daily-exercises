#include<stdio.h>
int dfsum(int n){
	int sum=0;
	if(n==0)
	return 0;
	sum+=n%10;
	n=n/10;
	return sum+dfsum(n);
}
bool solve(int n){
	int m=2;
	int sum1=dfsum(n);
	int sum2=0;
	while(n>=m){
		if(n%m==0){
			n=n/m;
			sum2+=dfsum(m);
		}
		else
		m++;
	}
	if(sum1==sum2)
	return 1;
	else
	return 0;
}
int main(){
	int n;
	while(true){
		scanf("%d",&n);
		if(n==0)
		break;
		while(!solve(n))
		n++;
		printf("%d\n",n);
	}
}

