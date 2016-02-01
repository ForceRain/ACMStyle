#include <iostream>

using namespace std;

int arr[101];

int main(void)
{
	int N,input,min=1001;

	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>input;
		if (input<min)
			min=input;
		arr[i]=input;
	}

	for (int i=0;i<N;i++)
	{
		if (min==arr[i])
			cout<<(i+1)<<" ";
	}

	return 0;
}