#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	unsigned long long input;
	scanf("%llu",&input);

	unsigned long long start = sqrt(input);

	if ( start*start < input )
		printf("%llu\n",start+1);
	else
		printf("%llu\n",start);

	return 0;
}