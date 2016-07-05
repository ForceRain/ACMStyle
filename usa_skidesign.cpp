#include <iostream>
#include <algorithm>

using namespace std;

int space[1001];

int main(void)
{
	int N;
	int weight=0;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>space[i];
	}

	while (true)
	{
		sort(space,space+N);

		if (space[N-1]-space[0]<=17)
			break;
		else
		{
			int alpha=(space[N-1]-space[0]-16)/2;
			weight+=alpha*alpha*2;
			space[0]=space[0]+alpha;
			space[N-1]=space[N-1]-alpha;
		}
	}

	cout<<weight<<endl;

	return 0;
}