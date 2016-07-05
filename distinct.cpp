#include <iostream>

using namespace std;

int space[10001];

int main(void)
{
	int N,tmp,counter=0;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		if (space[tmp]==0)
		{
			counter++;
			space[tmp]=1;
		}
	}

	cout<<counter<<endl;

	return 0;
}