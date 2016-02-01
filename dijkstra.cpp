#include <iostream>

using namespace std;

int W[1001][1001];
int nearest[1001];
int length[1001];
int going[1001];

int main(void)
{
	int N,M,src;
	cin>>N>>M>>src;

	int a,b,weight;
	for (int i=0;i<M;i++)
	{
		cin>>a>>b>>weight;
		W[a][b]=weight;
	}

	for (int i=1;i<=N;i++)
	{
		if (i!=src)
		{
			nearest[i]=src;
			length[i]=W[src][i];
		}
	}

	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=N;j++)
			cout<<W[i][j]<<" ";
		cout<<endl;
	}

	for (int i=1;i<=N;i++)
	{
		//if (i!=src)
		{
			int minimum=1000;
			int vertex_near=0;
			for (int j=1;j<=N;j++)
			{
				if ((0<length[j]) && (length[j]<minimum))
				{
					minimum=length[j];
					vertex_near=j;
				}
			}

			int edge=W[nearest[vertex_near]][vertex_near];
			cout<<"from : "<<nearest[vertex_near]<<" to : "<<vertex_near<<endl;

			//going[vertex_near]=nearest[vertex_near];

			for (int k=1;k<=N;k++)
			{
				if (length[vertex_near]+W[vertex_near][k]<length[k])
				{
					length[k]=length[vertex_near]+W[vertex_near][k];
					nearest[k]=vertex_near;
				}
			}
			length[vertex_near]=-1;
		}
		/*
		for (int i=1;i<=N;i++)
			cout<<going[i]<<" ";
		cout<<endl;*/
	}

	return 0;
}