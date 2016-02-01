#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>

using namespace std;

char input1[100];
char input2[100];
char output[100];

int reverse_num(char *input,int size)
{
	int limit=size/2;
	char tmp;
	for (int i=0;i<=limit;i++)
	{
		tmp=input[i];
		input[i]=input[size-i];
		input[size-i]=tmp;
	}
	//cout<<input<<endl;
	return atoi(input);
}

int main(void)
{
	cin>>input1>>input2;

	sprintf(output,"%d",reverse_num(input1,strlen(input1)-1)+reverse_num(input2,strlen(input2)-1));
	
	cout<<reverse_num(output,strlen(output)-1)<<endl;

	return 0;
}