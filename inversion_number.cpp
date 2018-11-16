#include<stdio.h>
int dfg(int a[],int i,int n){
	int sum=0;
	if((i+1)==n)
	return 0;
	for(int j=i+1;j<n;j++)
		if(a[i]>a[j])
		sum++;
	return sum+dfg(a,i+1,n);
}
int main(){
int a[]={3,1,4,5,2};
int n=5;
printf("%d",dfg(a,0,n));
}

