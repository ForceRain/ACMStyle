#include <iostream>

using namespace std;

int space[42];

int main(void)
{
	int tmp;
	for (int i=0;i<10;i++)
	{
		cin>>tmp;
		space[tmp%42]=1;
	}

	int counter=0;
	for (int j=0;j<42;j++)
	{
		if (space[j]==1)
			counter++;
	}

	cout<<counter<<endl;

	return 0;
}