#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	int A,B;
	scanf("%d%d",&A,&B);
	
	unsigned long long counting = 1;
	int cnt = 0;

	for ( unsigned long long tmp = 0; ( tmp = counting*counting ) <= B; counting++ )
	{
		if ( ( A <= tmp ) && ( tmp <= B ) )
			cnt++;
	}

	printf("%d\n",B-A+1-cnt);

	return 0;
}