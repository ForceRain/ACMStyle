#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int dp[100][20][2];
char duru[101];
char bridges[2][101];

int main(void)
{
	scanf("%s",duru);
	scanf("%s",bridges[0]);
	scanf("%s",bridges[1]);

	int duru_len=strlen(duru);
	int bridge_len=strlen(bridges[0]);

	dp[0][0][0]=1;dp[0][0][1]=1;
	for ( int i=1;i<=bridge_len ;i++)
	{
		for (int j=1;j<=duru_len;j++)
		{
			if (bridges[0][i-1]==duru[j-1])
				dp[i][j][1]+=dp[i-1][j-1][0];
			else
				dp[i][j][0]+=dp[i-1][j][0];

			if (bridges[1][i-1]==duru[j-1])
				dp[i][j][0]+=dp[i-1][j-1][1];
			else
				dp[i][j][1]+=dp[i-1][j][1];
		}
	}
	printf("%d\n",dp[bridge_len][duru_len][0]+dp[bridge_len][duru_len][1]);

	return 0;
}