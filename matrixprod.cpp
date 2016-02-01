#include <iostream>
#include <limits.h>

using namespace std;

int mat[101];
int prod[101][101];

int main(void)
{
	int N;
	cin>>N;

	for (int i=0;i<=N;i++)
	{
		cin>>mat[i];
	}

	for (int dia=1;dia<N;dia++)
	{
		for (int i=1;i<=N-dia;i++)
		{
			int j=i+dia;
			int mini=INT_MAX;
			for (int k=i;k<j;k++)
			{
				if (mini>prod[i][k]+prod[k+1][j]+mat[i-1]*mat[k]*mat[j])
					mini=prod[i][k]+prod[k+1][j]+mat[i-1]*mat[k]*mat[j];
			}
			prod[i][j]=mini;
		}
	}
	/*
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=N;j++)
			cout<<prod[i][j]<<" ";
		cout<<endl;
	}
	*/
	cout<<prod[1][N]<<endl;

	return 0;
}