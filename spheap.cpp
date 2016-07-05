#include <iostream>
#include <queue>

using namespace std;

priority_queue < pair< int,pair<int,int> > > container;
int weight[202][202];
bool visited[202][202];

int main(void)
{
	int direction[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
	int R,C;
	cin>>R>>C;

	for (int i=0;i<202;i++)
		for (int j=0;j<202;j++)
			weight[i][j]=-1;

	for (int i=1;i<=R;i++)
		for (int j=1;j<=C;j++)
			cin>>weight[i][j];

	int dest_x,dest_y;
	int start_x,start_y;
	cin>>start_x>>start_y;
	cin>>dest_x>>dest_y;

	container.push(pair<int, pair<int,int> > (-weight[start_x][start_y],pair<int,int>(start_x,start_y)));
	visited[start_x][start_y]=true;

	while (!container.empty())
	{
		pair<int, pair<int,int> > node=container.top();
		container.pop();
		int current_x=node.second.first;
		int current_y=node.second.second;
		int cur_weight=-node.first;

	//	cout<<current_x<<","<<current_y<<", w : "<<cur_weight<<endl;
		if (current_x==dest_x && current_y==dest_y)
		{
			cout<<cur_weight<<endl;
			break;
		}

		for (int k=0;k<4;k++)
		{
			int xpos=current_x+direction[k][0];
			int ypos=current_y+direction[k][1];
			if ( (1<=xpos) && (xpos<=R) && (1<=ypos) && (ypos<=C) && !visited[xpos][ypos])
			{
		//		cout<<"xpos : "<<xpos<<", ypos : "<<ypos<<", weight : "<<weight[xpos][ypos]+cur_weight<<endl;
				visited[xpos][ypos]=true;
				container.push(pair<int, pair<int,int> > (-(weight[xpos][ypos]+cur_weight),pair<int,int>(xpos,ypos)));
			}
		}
	}



	return 0;
}