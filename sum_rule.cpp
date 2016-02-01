#include <iostream>

using namespace std;

unsigned long long arr[20][20];

int main(void)
{
	for (int i=0;i<20;i++)
	{
		arr[i][0]=1;
		arr[0][i]=1;
	}

	for (int i=1;i<20;i++)
	{
		for (int j=1;j<20;j++)
		{
			arr[i][j]=arr[i-1][j]+arr[i][j-1];
		}
	}

	int row,col;
	cin>>row>>col;

	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}

	return 0;
}