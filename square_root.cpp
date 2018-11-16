#include<stdio.h>
int sd(int n){
	int i=1;
	for(i;i<n;i++)
	if(i*i>n)
	break;
	return i-1;
}
int main(){
	for(int i=1;i<=20;i++)
	printf("%d ",sd(i));
} 

