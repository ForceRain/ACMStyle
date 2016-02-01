#include <iostream>

using namespace std;

int N;

void output(int check)
{
	if (check<=N)
	{
		if (check==N)
			cout<<check;
		else
		{
			cout<<check;
			output(check+1);
			cout<<check;
		}
	}
}

int main(void)
{
	cin>>N;

	output(1);

	return 0;
}