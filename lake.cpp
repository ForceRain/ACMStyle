#include <iostream>

using namespace std;

int map[100][100];
bool visit[100][100];
int number;
int R;
int C;

void cal_map(int x,int y)
{
//	cout<<"x : "<<x<<", y : "<<y<<endl;
	if (((0<=x) && (x<R)) && ((0<=y) && (y<C)))
	{
		if ((map[x][y]==1) && (!visit[x][y]))
		{
			visit[x][y]=true;

			if (((x-1)>=0) && ((y-1)>=0))		cal_map(x-1,y-1);
			if ((x-1)>=0)						cal_map(x-1,y);
			if (((x-1)>=0) && ((y+1)<C))		cal_map(x-1,y+1);
			if ((y-1)>=0)						cal_map(x,y-1);
			if ((y+1)<C)						cal_map(x,y+1);
			if (((x+1)<R) && ((y-1)>=0))		cal_map(x+1,y-1);
			if ((x+1)<R)						cal_map(x+1,y);
			if (((x+1)<R) && ((y+1)<C))			cal_map(x+1,y+1);
		}
	}
}

int main(void)
{
	char tmp;

	number=0;
	cin>>R>>C;
	
	for (int i=0;i<R;i++)
	{
		for (int j=0;j<C;j++)
		{
			cin>>tmp;
			
			if (tmp=='W')
			{
				visit[i][j]=false;
				map[i][j]=1;
			}
			else
			{
				visit[i][j]=true;
				map[i][j]=0;
			}
		}
	}

	for (int i=0;i<R;i++)
	{
		for (int j=0;j<C;j++)
		{
			if ((!visit[i][j]) && (map[i][j]==1))
			{
				cal_map(i,j);
				number++;
			}
		}
	}
	cout<<number<<endl;

	return 0;
}