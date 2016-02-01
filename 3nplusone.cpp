#include <iostream>

using namespace std;

int main(void)
{
	int tmp,from,to;
	cin>>from>>to;

	if (from>to)
	{
		tmp=from;
		from=to;
		to=tmp;
	}

	int totalcnt=0;
	for (int start=from;start<=to;start++)
	{
		int out=start;
		int cnt=1;

		while (out!=1)
		{
			if (out%2==0)
			{
				out/=2;
			}
			else
			{
				out=out*3+1;
			}
			cnt++;
		}
		if (totalcnt<cnt)
			totalcnt=cnt;
	}

	cout<<totalcnt<<endl;

	return 0;
}