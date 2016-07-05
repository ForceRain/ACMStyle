#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int value_space[501][501];
int gusuls[3];

int main(void)
{
	int k1,k2,v;
	for (int i=0;i<3;i++)
		scanf("%d",&gusuls[i]);

	for (int i=0;i<501;i++)
	{
		value_space[i][0]=1;
		value_space[0][i]=1;
	}
	for (int i=0;i<501;i++)
	{
		for (int j=0;j<501;j++)
		{
			int found=0;
			for (int k=0;k<3;k++)
			{
				if (i-gusuls[k]>=0)
				{
					if (value_space[i-gusuls[k]][j]==0)
						found=1;
				}
				if (j-gusuls[k]>=0)
				{
					if (value_space[i][j-gusuls[k]]==0)
						found=1;
				}
			}
			value_space[i][j]=found;
		}
	}

	for (int i=0;i<5;i++)
	{
		scanf("%d%d",&k1,&k2);
		if (value_space[k1][k2] == 1)
			printf("A\n");
		else
			printf("B\n");
	}
	return 0;
}