#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

int pr_space[10001];
unsigned long long ques_space[10001];
vector <int> pr_container;

int main(void)
{
	int N;
	int li=sqrt(100000);
	pr_space[1]=0;
	pr_space[0]=0;
	for (int i=2;i<10001;i++)
		pr_space[i]=1;

	for (int i=2;i<=li;i++)
	{
		if (pr_space[i]!=0)
		{
			for (int j=2*i;j<10001;j+=i)
				pr_space[j]=0;
		}
	}
	for (int i=0;i<10001;i++)
	{
		if (pr_space[i] != 0)
			pr_container.push_back(i);
	}
	int sz=pr_container.size();
//	cout<<sz<<endl;
	for (int i=0;i<sz;i++)
	{
		int c_sum=pr_container[i];
		for (int j=i+1;j<sz;j++)
		{
			if (c_sum<10001)
				ques_space[c_sum]++;
			c_sum+=pr_container[j];
		}
	}

	while (true)
	{
		scanf ("%d",&N);
		if (N==0)
			break;

		printf("%d\n",ques_space[N]);
	}
	return 0;
}