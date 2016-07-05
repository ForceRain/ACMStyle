#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int a,b,x,l;
	scanf("%d%d%d%d",&a,&b,&x,&l);

	printf("%.6lf\n",(double)l/(a+b)*x);

	return 0;
}