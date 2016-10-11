
#include <bits/stdc++.h>
using namespace std;

int main() 
{
 	ios::sync_with_stdio(false);
  	cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--)
  	{
  		int n;
  		cin>>n;
  		vector< vector<int> > v(n,vector<int>(n));
  		vector< vector<int> > dp(n,vector<int>(n));
  		for(int i=0;i<n;i++)
  			for(int j=0;j<n;j++)
  				cin>>v[i][j];
  		for(int i=0;i<n;i++)
  			dp[n-1][i] = v[n-1][i];
  		for(int i=n-2;i>=0;i--)
  		{
  			for(int j=0;j<n;j++)
  			{
  				int a = INT_MAX, b = INT_MAX, c = INT_MAX;
  				if(j!=0)a = v[i][j]+dp[i+1][j-1];
  				b = v[i][j]+dp[i+1][j];
  				if(j!=n-1)c = v[i][j]+dp[i+1][j+1];
  				dp[i][j] = min(a,min(b,c));
  			}
  		}
  		int ans = INT_MAX;
  		for(int i=0;i<n;i++)
  			ans = min(ans, dp[0][i]);
  		cout<<ans<<endl;
  	}
  	return 0;
}
