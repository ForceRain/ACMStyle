#include <iostream>

using namespace std;

int main(void)
{
	int N;

	cin>>N;

	for (int i=1;i<=N/2+1;i++)
	{
		for (int j=(N/2+1)-i;j>0;j--)
			cout<<" ";

		for (int k=1;k<=i;k++)
			cout<<k;

		for (int l=i-1;l>0;l--)
			cout<<l;

		cout<<endl;
	}

	for (int i=N/2;i>0;i--)
	{
		for (int j=(N/2+1)-i;j>0;j--)
			cout<<" ";

		for (int k=1;k<=i;k++)
			cout<<k;

		for (int l=i-1;l>0;l--)
			cout<<l;

		cout<<endl;
	}

	return 0;
}