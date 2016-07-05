#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char strring[101];

int main(void)
{
	int num;
	scanf("%s",strring);
	scanf("%d",&num);

	int len = strlen( strring );
	int checkpoint = (len - num);

	if ( num > len )
	{
		printf("0\n");
		return 0;
	}

	if ( checkpoint >= len )
		printf("%s\n",strring);
	else
	{
		if ( strring[checkpoint] > '4' )
		{
			int pos = checkpoint;
			while ( pos < len )	strring[pos++] = '0';

			pos = (checkpoint - 1 );
			while ( (strring[pos]+1) >= ('9'+1) )
				strring[pos--] = '0';
			strring[pos]++;
		}
		else
		{
			int pos = checkpoint;
			while ( pos < len )
				strring[pos++] = '0';
		}
		if ( strring[0]=='0' )
		{
			int ruler = 1;
			int loop = 0;
			int lim = num > len ? num : len;
			while ( loop < lim )	
			{
				ruler *= 10;
				loop++;
			}
			printf("%d\n",ruler);
		}
		else
			printf("%s\n",strring);
	}
	
	return 0;
}