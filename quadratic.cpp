#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	long long a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);

	double af = a, bf = b, cf = c;
	long long d = b*b-4*a*c;

	if ( d < 0 )
		printf("0\n");
	else if ( d > 0 )
	{
		printf("2\n");
		printf("%.3lf %.3lf\n",(-bf-sqrt(bf*bf-4*af*cf))/(2*af),(-bf+sqrt(bf*bf-4*af*cf))/(2*af));
	}
	else
	{
		printf("1\n");
		printf("%.3lf\n",(-b/(double)(2*a)));
	}

	return 0;
}