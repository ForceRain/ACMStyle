#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin>>N;

	int result=5001;

	if ((N%3)==0)
	{
		if (result>(N/3))
			result=(N/3);
	}

	if ((N%5)==0)
	{
		if (result>(N/5))
			result=(N/5);
	}

	for (int i=5;i<=N;i+=5)
	{
		for (int j=3;j<=N;j+=3)
		{
			if (N==i+j)
			{
				if (result>i/5+j/3)
					result=i/5+j/3;
			}
		}
	}

	if (result==5001)
		cout<<-1<<endl;
	else
		cout<<result<<endl;

	return 0;
}