#include <iostream>
#include <cstdio>

using namespace std;

unsigned long long space[2000];

int main(void)
{
	int total_sum,n;
	scanf("%d",&n);

	total_sum=((n+1)*n)/2;

	if ( (total_sum % 2) != 0)
		printf("0\n");
	else
	{
		space[0]=1;
		int obj=total_sum;
		for (int i=1;i<=n;i++)
		{
			for (int j=total_sum;j>=0;j--)
			{
				if ((j-i)>=0)	
					space[j]=space[j]+space[j-i];
			}
		}
		printf ("%d\n",space[total_sum/2]/2);
	}
	/*
	for (int i=0;i<=total_sum;i++)
		printf ("%d ",space[i]);
	printf ("\n");
	*/

	return 0;
}