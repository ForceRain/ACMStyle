#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int arr[4]={0};
	cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

	sort(arr,arr+4);

	int a,b,c,d;
	a=arr[3];
	b=arr[0];
	c=arr[2];
	d=arr[1];
	cout<<b*c<<endl;

	return 0;
}