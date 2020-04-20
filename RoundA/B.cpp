#include <bits/stdc++.h>
using namespace std;
int arr[51][31],n,k,p,dp[51][1501];

int beauty(int i,int pcur)
{
	if(i>n||pcur<1)
		return 0;
	if(dp[i][pcur]!=-1)
		return dp[i][pcur];
	
	int ans=0;
	for(int j=0;j<=k;j++)
	{
		if(pcur<j)	break;
		ans=max(ans,arr[i][j]+beauty(i+1,pcur-j));
	}
	return dp[i][pcur]=ans;
}
int main()
{
	int t,tt=0;
	cin >> t;
	int x;
	while(t--)
	{
		cin >> n >> k >> p;
		memset(dp,-1,sizeof(dp));
		memset(arr,0,sizeof(0));
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=k;j++)
			{
				cin >> x;
				arr[i][j]=x+arr[i][j-1];
			}
		}
		int ans=beauty(1,p);
		cout << "Case #" << (++tt) << ": " << ans << "\n";
	}
}
