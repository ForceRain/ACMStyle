#include <iostream>

using namespace std;

int arr[500001];

int main(void)
{
	int N,tmp,x;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		arr[i]=tmp;
	}
	cin>>x;

	int high=N-1;
	int low=0;
	int mid=(high+low)/2;
	int position=-1;
	while ((low<=high) && (position==-1))
	{
		mid=(high+low)/2;

		if (arr[mid]<x)
			low=mid+1;
		else if (arr[mid]>x)
			high=mid-1;
		else
			position=mid;
	}

	if (position==-1)
		cout<<"not found"<<endl;
	else
		cout<<position+1<<endl;

	return 0;
}