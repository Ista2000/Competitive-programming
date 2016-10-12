
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

  	int t;
  	cin>>t;
  	vector<long long int> v(1000009,0);
  	v[0] = 0;
  	v[1] = 0;
  	v[2] = 1;
  	v[3] = 2;
  	for(int i=4;i<=1000005;i++)
  		v[i] = ((2*v[i-1]%MOD)%MOD+((-2*v[i-3]+MOD+MOD)%MOD)%MOD+(v[i-2])%MOD+(-v[i-4]+MOD+MOD)%MOD)%MOD;
  	while(t--)
  	{
  		int n;
  		cin>>n;
  		cout<<v[n]%MOD<<endl;
  	}
  	return 0;
}
