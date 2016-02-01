#include <iostream>

using namespace std;

int arr[5][5];
char result[5][5];

void calculate()
{
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			bool check_up=false;
			bool check_down=false;
			bool check_l=false;
			bool check_r=false;
			if (((i-1)>=0))
			{
				if(arr[i-1][j]>arr[i][j])
					check_up=true;
			}
			else
			{
				check_up=true;
			}
			if (((i+1)<5))
			{
				if(arr[i+1][j]>arr[i][j])
					check_down=true;
			}	
			else
			{
				check_down=true;
			}
			if (((j-1)>=0))
			{
				if ((arr[i][j-1]>arr[i][j]))
					check_l=true;
			}
			else
			{
				check_l=true;
			}
			if (((j+1)<5))
			{
				if ((arr[i][j+1]>arr[i][j]))
					check_r=true;
			}
			else
			{
				check_r=true;
			}

			if (check_up && check_down && check_l && check_r)
				result[i][j]='*';
			else
				result[i][j]=arr[i][j]+'0';
		}
	}
}

int main(void)
{
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
			cin>>arr[i][j];
	}

	calculate();

	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
			cout<<result[i][j]<<" ";
		cout<<endl;
	}

	return 0;
}