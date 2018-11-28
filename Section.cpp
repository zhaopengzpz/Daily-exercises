#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m;
int main()
{

	cin>>n>>m;
	int a[n];
	int b[n-1];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	for(int i=1;i<n;i++)
	b[i-1]=a[i]-a[i-1]-1;
	sort(b,b+n-1);
	int sum=n;
	for(int i=0;i<n-m;i++)
	sum+=b[i];
	printf("%d",sum);
	return 0;
}
