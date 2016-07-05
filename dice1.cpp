#include <iostream>

using namespace std;

int main(void)
{
	int number;
	cin>>number;

	int limit=(number%2==1)?(number)/2+1:number/2;
	for (int i=number;i>=limit;i--)
	{
		if (1<=i && i<=6 && 1<=(number-i) && number-i<=6)
			cout<<number-i<<" "<<i<<endl;
	}

	return 0;
}