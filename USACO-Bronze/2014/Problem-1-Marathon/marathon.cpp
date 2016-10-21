
#include <bits/stdc++.h>
#define FILEIO                FILE* _1 = freopen("marathon.in", "r", stdin);FILE* _2 = freopen("marathon.out", "w", stdout);

using namespace std;

int dist(pair<int,int> a, pair<int,int> b)
{
	return abs(a.first-b.first)+abs(a.second-b.second);
}

int main() 
{
 	ios::sync_with_stdio(false);
  	cin.tie(0);
  	FILEIO;

  	int n;
  	cin>>n;
  	vector< pair<int,int> > v(n);
  	for(int i=0;i<n;i++)
		cin>>v[i].first>>v[i].second;
  	int totdist = 0;
  	for(int i=0;i<n-1;i++)
  		totdist+=dist(v[i],v[i+1]);
  	int ans = INT_MAX;
  	for(int i=1;i<n-1;i++)
  		ans = min(ans,totdist-dist(v[i-1],v[i])-dist(v[i],v[i+1])+dist(v[i-1],v[i+1]));
  	cout<<ans<<endl;
  	return 0;
}
