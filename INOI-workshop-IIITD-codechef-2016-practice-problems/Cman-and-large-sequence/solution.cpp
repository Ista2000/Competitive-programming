
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
bool cmp(pair<int,int> a, pair<int,int> b)
{
	if(a.second==b.second)return a.first>b.first;
	return a.second>b.second;
}
int main() 
{
 	ios::sync_with_stdio(false);
  	cin.tie(0);
  	int n;
  	cin>>n;
  	vi v1(n);
  	map<int,int> m;
  	fff(n){cin>>v1[i];m[v1[i]]++;}
  	vector< pair<int,int> > v(m.size());
  	int cnt = 0;
  	for(auto i= m.begin();i!=m.end();i++)
  		v[cnt++] = *i;
  	sort(all(v),cmp);
  	fff(v.size())
  	{
  		
  	}
  	return 0;
}
