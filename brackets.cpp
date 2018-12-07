#include<stdio.h>
#include<stack>
using namespace std;
stack <char> st;
int m=0;
void df(char c)
{
	if(c=='(')
	st.push('(');
	else if(c=='[')
	st.push('[');
	else if(c=='{')
	st.push('{');
	else if(c==')'){
		if(st.top()=='(')
		st.pop();
		else
		m++;
	}
	else if(c==']'){
		if(st.top()=='[')
		st.pop();
		else
		m++;
	}
	else if(c=='}'){
		if(st.top()=='{')
		st.pop();
		else
		m++;
	}
}
int main(){
	char as[4];
	scanf("%s",&as);
	for(int i=0;i<4;i++){
		df(as[i]);
	}
	printf("%d",st.size()+m);
	return 0;
}
