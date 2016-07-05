#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[201];
int ptr=0;
int tot_len;

int get_next_token()
{
	if ( tot_len < ptr )
		return input_stream[ptr++];
	else
		return -1;
}

void A()
{

}

int main(void)
{
	scanf("%s",input_stream);
	tot_len=strlen(input_stream);



	return 0;
}