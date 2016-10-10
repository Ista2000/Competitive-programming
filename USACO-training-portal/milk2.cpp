/*
ID: mishra.10
PROG: milk2
LANG: C++11
*/
#include <bits/stdc++.h>

#define PI                    3.14159265359
#define ff                    first
#define ss                    second
#define endl                  "\n"
#define endln                 cout<<endl;
#define pb                    push_back
#define MOD                   1000000007
#define INF                   INT_MAX
#define fre(x,y)              for(int i=x;i<y;i++)
#define fff(n)                fre(0,n)
#define tt(t)                 while(t--)
#define vi                    vector<int>
#define sz(a)                 int((a).size())
#define space                 " "
#define all(x)                (x).begin(), (x).end()
#define FILEIO                FILE* _1 = freopen("milk2.in", "r", stdin);FILE* _2 = freopen("milk2.out", "w", stdout);
#define ll                    long long int

using namespace std;

int main() 
{
 	ios::sync_with_stdio(false);
  	cin.tie(0);
  	FILEIO
  	int n;
  	cin>>n;
  	vector< pair<int,int> > v(n);
  	fff(n)
  		cin>>v[i].first>>v[i].second;
  	sort(all(v));
  	int low = v[0].first, high = v[0].second, ans = high-low;int ans2 = 0;
  	fre(1,n)
  	{
  		if(v[i].first<=high)high = max(high,v[i].second);
  		else{ans2 = max(ans2,v[i].first-high);low = v[i].first;high = v[i].second;}
  		ans = max(ans,high-low);
  	}
  	cout<<ans<<" "<<ans2<<endl;
  	return 0;
}
