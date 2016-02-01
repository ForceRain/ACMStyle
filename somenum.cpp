#include <iostream>

using namespace std;

int main(void)
{
	for (int i=1;i<=10000;i++)
	{
		int target=i;
		bool right=false;
		for (int j=1;j*j<=target;j++)
		{
			if ((target%j)==0)
				right=true;
			else
				right=false;
		}

		if (right)
			cout<<target<<endl;
	}

	return 0;
}