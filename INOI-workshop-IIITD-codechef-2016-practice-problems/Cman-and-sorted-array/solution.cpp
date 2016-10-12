
#include <bits/stdc++.h>
using namespace std;

int main() 
{
 	ios::sync_with_stdio(false);
  	cin.tie(0);
  	long long int t;
  	cin>>t;
  	while(t--)
  	{
  		long long int n;
  		cin>>n;
  		long long int ans = 0;
  		long long int x, y;
  		cin>>x;n--;
  		while(n--)
  		{
  			cin>>y;
  			if(x>y)ans+=x-y;
  			x = y;
  		}
  		cout<<ans<<endl;
  	}
  	return 0;
}
