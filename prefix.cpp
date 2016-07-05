#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

char input_stream[100];
char tgt_stream[200001];
vector <string> container;
int tot_space[200001];

int main(void)
{
	while ( true )
	{
		scanf("%s",input_stream);
		if (strcmp(input_stream,".")==0)
			break;
		container.push_back(string(input_stream));
	}
	scanf("%s",tgt_stream);
	int len=strlen(tgt_stream);
	int sz=container.size();
	tot_space[0]=1;
	for (int i=0;i<sz;i++)
	{
		int val=container[i].length();
		for (int j=1;j<=len;j++)
		{
			if ( j-val >=0 )
			{
				bool checking=true;
				int str_pt=0;
				for ( int k=j-val;k<j;k++,str_pt++)
				{
					if (container[i].at(str_pt) != tgt_stream[k])
						checking=false;
				}
				if (checking)
					tot_space[j]+=tot_space[j-val];
			}
		} 
	}
	for (int i=0;i<len;i++)
		printf("%d ",tot_space[i]);

	return 0;
}