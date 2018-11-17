#include<iostream>  
#include<queue>  
#include<string>  
using namespace std;
int state[10][10][10][10];//��ά�����ʾ�˺����ӵ�λ��״̬,��ʼȫΪ0  
 
struct q
{
	int px, py, bx, by;
	q(int x, int y, int bx, int by) :px(x), py(y), bx(bx), by(by) {}
};
int moves[4][2] = { { 0,1 },{ 0,-1 },{ -1,0 },{ 1,0 } };//�ĸ�����  
char map[10][10];//��ͼ����  
int chx, chy, cbx, cby, ex, ey, n, m;//�ֱ��ʾ��ǰ�˵�λ�ã����ӵ�λ�ã��յ�λ�ã��Լ���ͼ�ߴ硣  
 
bool bound(int x, int y)//�߽��飬�����������λ�÷�����  
{
	if (x < 0 || y < 0 || x >= n || y >= m || map[x][y] == '#')
		return true;
	else
		return false;
}
//��������㷨
int bfs()
{
	state[chx][chy][cbx][cby] = 1;//��ǰ��ʵ״̬λ���貽��Ϊ1  
	q temp(chx, chy, cbx, cby);
	queue<q> que; //״̬����  
	que.push(temp);//��ʼ״̬��ջ  
	while (que.size()) //ֻҪ���в�Ϊ�վ�һֱѰ��  
	{
		temp = que.front();//��ȡ��Ԫ��  
		que.pop();//��Ԫ�ص���  
		if (temp.bx == ex&&temp.by == ey)
			return state[temp.px][temp.py][temp.bx][temp.by] - 1;//����������յ㣬���������ز���  
		for (int i = 0; i < 4; i++)//�ĸ�����ʼ������  
		{
			//�ȸ����˵�λ��  
			int px = temp.px + moves[i][0];
			int py = temp.py + moves[i][1];
			if (bound(px, py))
				continue;//������λ�÷Ƿ���̽Ѱ��������  
			if (px == temp.bx&&py == temp.by)//�����ʱ�˵�λ�������ӵ�λ���غϣ�˵����Ӧ���ƶ�������  
			{
				if (bound(temp.bx + moves[i][0], temp.by + moves[i][1]))
					continue;//��������ƶ���λ�ò��Ϸ���������̽Ѱ��������  
				state[px][py][temp.bx + moves[i][0]][temp.by + moves[i][1]] =
					state[temp.px][temp.py][temp.bx][temp.by] + 1;//�����ƶ������˺�����λ�øı䣬��¼��״̬  
				que.push(q(px, py, temp.bx + moves[i][0], temp.by + moves[i][1]));//��״̬��ջ  
 
			}
			else//��û���ƶ�����  
			{
				if (state[px][py][temp.bx][temp.by])//����ƶ����״̬���ֹ��������������·���  
					continue;
				state[px][py][temp.bx][temp.by] = state[temp.px][temp.py][temp.bx][temp.by] + 1;
				//û���߹�����·����������  
				que.push(q(px, py, temp.bx, temp.by));//����״̬  
 
 
			}
 
		}
	}
	return -1;//�������λ�ö��Թ��ˣ�û���ҵ���˵��������  
 
}
 
 
int main()
{
	
	cin >> n >> m;
	//cin.clear();  
	for (int i = 0; i < n; i++) {
		scanf("%s", map[i], m + 1);//�����ͼ 
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == '*'){cbx = i;cby = j;}//��ȡ���ӵ����� 
			else if (map[i][j] == 'X') {chx = i;chy = j;}//����˵����� 
			else if (map[i][j] == '@'){ex = i;ey = j;}//���Ŀ�ĵ����� 
		}
	} 
	cout << bfs() << endl;
	return 0;
}

