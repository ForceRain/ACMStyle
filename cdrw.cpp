#include <iostream>

using namespace std;

int one[10001];
int three[10001];
int four[10001];

int main(void)
{
	int totalptr=0;
	int oneptr=0,thptr=0,fptr=0;
	int numCD;
	cin>>numCD;

	while (numCD!=0)
	{
		oneptr++;
		numCD--;

		if ((totalptr%3==0) && (numCD!=0))
		{
			thptr+=3;
			numCD--;
		}
		if ((totalptr%4==0) && (numCD!=0))
		{
			fptr+=4;
			numCD--;
		}

		totalptr++;
	}

	cout<<oneptr<<" "<<thptr<<" "<<fptr<<endl;

	if (oneptr<thptr)
	{
		if (thptr<fptr)
			cout<<fptr<<endl;
		else
			cout<<thptr<<endl;
	}
	else
	{
		if (oneptr<fptr)
			cout<<fptr<<endl;
		else
			cout<<oneptr<<endl;
	}

	return 0;
}