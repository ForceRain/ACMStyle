#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	double product = (double)a*((double)b/100.0 + 1.0);
	double sale = product * ( 1.0 - (double)c/100.0);

	if ( sale > (double)a )
	{
		printf("%.0lf\n",sale - a);
	}
	else
		printf("loss\n");

	return 0;
}