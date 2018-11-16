#include<stdio.h>
void sd(int b){
	for(int i=0;i<=b;i++)
	for(int j=0;j<b;j++)
	for(int l=0;l<b;l++)
	if(1*i+2*j+5*l==b)
	{
		for(int m=0;m<i;m++)
		printf("1 ");
		for(int m=0;m<j;m++)
		printf("2 ");
		for(int m=0;m<l;m++)
		printf("5 ");
		printf("\n");
	}
}
int main(){
	sd(10);
}
