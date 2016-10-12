
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

multiset<pair<double, int> > Q;

int main() 
{
	ios::sync_with_stdio(false); 
	cin.tie(0);

  	int n,m; cin>>n>>m;
  	while(n--) 
  	{
    	int x; cin >> x;
   		Q.insert({x, -1});
  	}
  	double ans = Q.rbegin()->first - Q.begin()->first;
  	while(m--) 
  	{
    	pair<double, int> curr = *Q.rbegin(); Q.erase(Q.find(curr));
    	curr.second *= -1;
    	curr.first = (curr.first * curr.second)/(curr.second + 1);
    	curr.second++;
    	curr.second *= -1;
    	Q.insert(curr);

    	ans = min(ans, Q.rbegin()->first - Q.begin()->first);
  	}
  	cout<<fixed<<setprecision(8)<<ans<<endl;
}
