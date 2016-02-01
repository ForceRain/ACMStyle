#include <iostream>

using namespace std;

int arr[100001];

int main(void)
{
	int N,tmp;
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		arr[i]=tmp;
	}

	int num,from,to;
	cin>>num;

	for (int j=0;j<num;j++)
	{
		cin>>from>>to;
		long long output=0;
		for (int k=from-1;k<=to-1;k++)
		{
			output+=arr[k];
		}
		cout<<output<<endl;
	}

	return 0;
}