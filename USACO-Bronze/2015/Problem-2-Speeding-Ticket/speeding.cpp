
#include <bits/stdc++.h>
#define FILEIO                FILE* _1 = freopen("speeding.in", "r", stdin);FILE* _2 = freopen("speeding.out", "w", stdout);

using namespace std;

int main() 
{
 	ios::sync_with_stdio(false);
  	cin.tie(0);
  	FILEIO;

  	int n, m;
  	cin>>n>>m;
  	vector< pair<int,int> > v(n);
  	vector< pair<int,int> > s(m);
  	for(int i=0;i<n;i++)
  		cin>>v[i].first>>v[i].second;
  	for(int i=0;i<m;i++)
  		cin>>s[i].first>>s[i].second;
  	int ans = 0;
  	int cntv = 0, cnts = 0;
  	int ved = 0, sed = 0;
  	for(int i=1;i<=100;i++)
  	{
  		if(i>ved+v[cntv].first)
  			ved+=v[cntv++].first;
  		if(i>sed+s[cnts].first)
  			sed+=s[cnts++].first;
  		ans = max(ans,s[cnts].second-v[cntv].second);
  	}
  	if(ans>0)cout<<ans<<endl;
  	else cout<<0<<endl;

  	return 0;
}
