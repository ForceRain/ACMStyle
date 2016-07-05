#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

class check
{
private :
	int *cows;
	int *ans;
	int N;
	int Q;

public :
	check(int N,int Q) :N(N),Q(Q)
	{
		cows=new int[N];
		ans=new int[Q];
	}
	void init()
	{
		int tmp;
		for (int i=0;i<N;i++)
		{
			scanf("%d",&tmp);
			cows[i]=tmp;
		}
	}
	void find()
	{
		int begin,end;
		for (int i=0;i<Q;i++)
		{
			scanf("%d%d",&begin,&end);
			begin--;
			end--;
			ans[i]=diff(begin,end);
		}

		for (int i=0;i<Q;i++)
			cout<<ans[i]<<endl;
	}

	int diff(int begin,int end)
	{
		if (begin==end)
			return 0;

		int *t_arr=new int[end-begin+1];
		copy(cows+begin,cows+begin+end+1,t_arr);
		sort(t_arr,t_arr+(end-begin+1));

		int out=t_arr[end-begin]-t_arr[0];

		delete t_arr;
		return out;
	}

};

int main(void)
{
	int N,Q;

	scanf("%d%d",&N,&Q);

	check obj(N,Q);

	obj.init();
	obj.find();

	return 0;
}