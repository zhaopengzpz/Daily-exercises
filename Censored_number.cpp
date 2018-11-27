#include<iostream>
using namespace std;
string n; //¶¨Òå×Ö·û´®n
int s;
main()
{
	cin>>n>>s;
	int len=n.size(); 
	while(s--)
		for(int i=0;i<len;i++)
			if(n[i]>n[i+1]||i==len-1) 
			{
				n.erase(i,1); 
				break; 
			}
	while(n[0]=='0'&&n[1])
		n.erase(0,1);
	cout<<n; 
}

