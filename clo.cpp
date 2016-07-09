#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int N;
	scanf("%d",&N);

	if ( N == 11 )
		printf("CAN'T SEE!\n");
	else if ( N == 12 )
		printf("0.000000\n");
	else
		printf("%.6lf\n",((double)60.0*N)/11);

	return 0;
}