#include <iostream>

using namespace std;

int main(void)
{
	int N;

	cin>>N;
	for (int i=1;i<=6;i++)
	{
		if (((N-i)<=6) && (N-i>0))
			cout<<i<<" "<<(N-i)<<endl;
	}

	return 0;
}