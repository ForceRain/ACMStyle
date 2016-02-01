#include <iostream>

using namespace std;

int absolute(int input)
{
	if (input<0)
		return -input;
	else
		return input;
}

int main(void)
{
	int input;
	bool check=true;
	int diagonal_sum=0;
	int diagonal=0;
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			cin>>input;
			if (i==j)
				diagonal=absolute(input);
			else
				diagonal_sum+=absolute(input);
		}

		if (diagonal<diagonal_sum)
			check=false;

		diagonal=0;
		diagonal_sum=0;
	}

	if (check)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}