#include <iostream>

using namespace std;

int W[101][101];
int M[101][101];
int N;

int find_max(int a,int b)
{
	return (a>b)?a:b;
}

int main(void)
{
	cin>>N;

	for (int i=0;i<N;i++)
	{
		for (int j=0;j<N;j++)
		{
			cin>>W[i][j];
		}
	}

	int lp=0,rp=0;
	for (int k=0;k<N;k++)
	{
		if (W[k][0]!=0)
		{
			M[k][0]=W[k][0]+lp;
			lp++;
		}
		else
			M[k][0]=lp;

		if (W[0][k]!=0)
		{
			M[0][k]=W[0][k]+rp;
			rp++;
		}
		else
			M[0][k]=rp;
	}

	for (int r=1;r<N;r++)
	{
		for (int j=r;j<N;j++)
		{
			//cout<<"r : "<<r<<", j : "<<j<<endl;

			M[r][j]=find_max(M[r-1][j]+W[r][j],M[r][j-1]+W[r][j]);
			/*
			for (int i=0;i<N;i++)
			{
				for (int k=0;k<N;k++)
					cout<<M[i][k]<<" ";
				cout<<endl;
			}
			*/
			M[j][r]=find_max(M[j-1][r]+W[j][r],M[j][r-1]+W[j][r]);
			/*
			for (int i=0;i<N;i++)
			{
				for (int k=0;k<N;k++)
					cout<<M[i][k]<<" ";
				cout<<endl;
			}*/
		}
	}

	cout<<M[N-1][N-1]<<endl;

	return 0;
}