#include<stdio.h>
int main(){
int a,b,c,d;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
for(double i=-100;i<=100;i++)
if((a*i*i*i+b*i*i+c*i+d)==0)
printf("%.2f ",i);	
}
