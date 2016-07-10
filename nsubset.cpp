#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int n,m;
	scanf("%d%d",&n,&m);

	unsigned long long res = 1;

	for ( int i=0;i<n;i++ )
		res *= m;
	printf("%llu\n",res);

	return 0;
}