#include <iostream>
#include <cstdio>

using namespace std;

int per[1001];

int main(void)
{
	int N,tmp;
	double sum=0.0;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		sum+=tmp;
		per[i]=tmp;
	}

	sum/=N;

	int cnt=0;
	for (int i=0;i<N;i++)
	{
		if (per[i]>sum)
		{
			cnt++;
		}
	}
	printf("%.3lf%%\n",100.0*cnt/N);

	return 0;
}