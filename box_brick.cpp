#include <iostream>
#include <cmath>

using namespace std;

int arr[51];

int main(void)
{
	int N;
	cin>>N;

	int aver=0,tmp;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		arr[i]=tmp;
		aver+=tmp;
	}

	aver/=N;

	int cnt=0;
	for (int i=0;i<N;i++)
	{
		if (arr[i]>aver)
			cnt+=arr[i]-aver;
	}

	cout<<"The minimum number of moves is "<<cnt<<"."<<endl;
	return 0;
}