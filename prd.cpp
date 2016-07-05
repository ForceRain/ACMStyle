#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin>>N;

	if (N==1)
	{
		cout<<"1"<<endl;
		return 0;
	}
	long long n,n_1=1,n_2=1;

	for (int i=2;i<=N;i++)
	{
		n=3*(n_1%100000)-n_2%100000;
		n_2=n_1%100000;
		n_1=n%100000;
	}

	cout<<n<<endl;


	return 0;
}