#include <iostream>

using namespace std;

int main(void)
{
	int A;
	cin>>A;

	int cnt=0;
	for (int i=1;i<100;i++)
	{
		for (int j=1;j<100;j++)
		{
			if (A==i+j)
				cnt++;
		}
	}

	cout<<cnt<<endl;

	return 0;
}