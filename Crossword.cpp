#include<stdio.h>
#include<string.h>
int mov[4][2]={{0,1},{0,-1},{1,0},{-1,0}}; 
int coordinate[4][2]={{0,1},{1,0},{1,2},{2,1}};
int a[3][3]={{1,2,5},{4,3,10},{6,8,9}};
bool qw(int a,int b)
{
	int c=a+b;
	int i;
	for(i=2;i<c;i++)
	if(c%i==0)
	break;
	return i==c;
}
bool bound(int x,int y){
	if(x<0||y<0||x>=3||y>=3)
	return 0;
	return 1;
}
bool zx(int a[][3]){
	int i=0,j=0;
	for(i=0;i<4;i++){
		int x=coordinate[i][0];
		int y=coordinate[i][1];
		for(j=0;j<4;j++){
			int xx=x+mov[j][0];
			int yy=y+mov[j][1];
			if(bound(xx,yy)){
				if(!qw(a[x][y],a[xx][yy]))
				break;
				
			}
		}
		if(j!=4)
		break;
	}
	return i==4;
}
void as(){
	bool df[11];
	memset(df,0,sizeof(df));
	for(a[0][0]=1;a[0][0]<=10;a[0][0]++){
		df[a[0][0]]=1;
		for(a[0][1]=1;a[0][1]<=10;a[0][1]++){
			if(!df[a[0][1]]){
			df[a[0][1]]=1;
			for(a[0][2]=1;a[0][2]<=10;a[0][2]++){
				if(!df[a[0][2]]){
					df[a[0][2]]=1;
					for(a[1][0]=1;a[1][0]<=10;a[1][0]++){
						if(!df[a[1][0]]){
						df[a[1][0]]=1;
							for(a[1][1]=1;a[1][1]<=10;a[1][1]++){
								if(!df[a[1][1]]){
								df[a[1][1]]=1;
								for(a[1][2]=1;a[1][2]<=10;a[1][2]++){
									if(!df[a[1][2]]){
									df[a[1][2]]=1;
									for(a[2][0]=1;a[2][0]<=10;a[2][0]++){
										if(!df[a[2][0]]){
										df[a[2][0]]=1;
										for(a[2][1]=1;a[2][1]<=10;a[2][1]++){
											if(!df[a[2][1]]){
											df[a[2][1]]=1;
											for(a[2][2]=1;a[2][2]<=10;a[2][2]++){
												if(!df[a[2][2]]){
												df[a[2][2]]=1;
												if(zx(a)){
													printf("%2d%2d%2d\n",a[0][0],a[0][1],a[0][2]);
												printf("%2d%2d%2d\n",a[1][0],a[1][1],a[1][2]);
												printf("%2d%2d%2d\n",a[2][0],a[2][1],a[2][2]);
												printf("\n");
												}
												
												df[a[2][2]]=0;
												}
											}
											df[a[2][1]]=0;
											}
										}
										df[a[2][0]]=0;
										}
									}
									df[a[1][2]]=0;
									}
								}
								df[a[1][1]]=0;
								}
							}
						df[a[1][0]]=0;
					}
				}
					df[a[0][2]]=0;
				}
			}
				df[a[0][1]]=0;
			}
		}
		df[a[0][0]]=0;
	}
}
int main(){
as();
}
