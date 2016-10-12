
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
  		int n,
  		cin>>n>>d;
  		for(int i=0;i<n-2;i++)cout<<1<<" ";
  		cout<<2<<" "<<(n+d)<<endl;
  	}
  	return 0;
}
