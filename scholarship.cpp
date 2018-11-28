#include<stdio.h>
#include<algorithm>
using namespace std;
struct NodeCU{
	int a;//平时成绩 
	int b;//时间 
};
NodeCU c[]={{80,5},{70,2},{90,3},{60,1}};
bool compare(NodeCU n,NodeCU m){
return n.b<m.b;
}
int main(){
	sort(c,c+4,compare);
	float ma=100,avg=82.5;
	//scanf("%f%f",&ma,&avg);
	int s=ma*4-avg*4,i=0,time=0;
	printf("%d\n",s);
	printf("%d\n",time);
	while(1){
		if((100-c[i].a)>s){
			time+=c[i].b*s;
			printf("%d\n",time);
			break;
		}else{
			time+=c[i].b*(100-c[i].a);
			printf("%d\n",time);
			s-=(100-c[i].a);
			i++;
		}
	}
	printf("%d",time);
	return 0;
}
