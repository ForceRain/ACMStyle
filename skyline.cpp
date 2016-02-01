#include <iostream>

using namespace std;

int space[5001];
int least=5001;
int great=-1;

int main(void)
{
	int N;
	cin>>N;
	int start,end,height;

	for (int i=0;i<N;i++)
	{
		cin>>start>>end>>height;
		if (start<least)
			least=start;
		if (end>great)
			great=end;
		for (int j=start;j<=end;j++)
		{
			if (space[j]<height)
				space[j]=height;
		}
	}
	/*
	for (int k=0;k<100;k++)
		cout<<space[k]<<" ";
	cout<<endl;
	*/
	int identifier=space[least];
	int lp=least;
	for (int move=least;move<=great;move++)
	{
		if (identifier>space[move])
		{
			cout<<lp<<" "<<move-1<<" "<<space[move-1]<<endl;
			lp=move-1;
			identifier=space[move];
		}
		else if (identifier<space[move])
		{
			cout<<lp<<" "<<move<<" "<<space[move-1]<<endl;
			lp=move;
			identifier=space[move];
		}
	}

	cout<<lp<<" "<<great<<" "<<space[great-1]<<endl;

	return 0;
}