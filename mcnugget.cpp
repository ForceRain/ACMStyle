#include <iostream>
#include <cstdio>

using namespace std;

int tot_space[100001];
int values[10];

int main(void)
{
	int t;
	scanf("%d",&t);
	int val;
	int tot_sum=100000;
	bool all_even=true;

	for (int i=0;i<t;i++)
	{
		scanf("%d",&values[i]);
	//	tot_sum+=values[i];
		tot_space[values[i]]=1;
		if (values[i]%2!=0)
			all_even=false;
	}
	
	for (int i=1;i<=tot_sum;i++)
	{
		for (int j=0;j<t;j++)
		{
			if ( i-values[j] >=0 )
			{
				if (tot_space[i-values[j]]!=0)
					tot_space[i]=1;
			}
		}
	}
	int zero_cnt=0;
	int zero_max_pos;
	for (int i=1;i<=tot_sum;i++)
	{
		if (tot_space[i]==0)
		{
			zero_cnt++;
			zero_max_pos=i;
		}
	}
	if ( (zero_cnt==tot_sum) || (zero_cnt==0) || all_even )
		printf("0\n");
	else
		printf("%d\n",zero_max_pos);

	return 0;
}