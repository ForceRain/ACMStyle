#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int weights[101];
int space[101];

int main(void)
{
	int N,tot_sum=0;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		scanf("%d",&weights[i]);
		tot_sum+=weights[i];
	}
	sort(weights,weights+N);

	for (int i=0;i<N;i++)
		space[i]=weights[i]+weights[(N-1)-i];

	int pos;
	int mini=0x7FFFFFFF;
	for (int i=0;i<N;i++)
	{
		if ( mini> tot_sum-space[i] )
		{
			mini=tot_sum-space[i];
			pos=i;
		}
	}

	if (mini > space[pos])
		printf("%d %d\n",tot_sum-space[pos],mini);
	else
		printf("%d %d\n",mini,space[pos]-mini);

	return 0;
}