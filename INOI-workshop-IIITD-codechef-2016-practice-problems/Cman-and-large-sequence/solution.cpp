
#include <bits/stdc++.h>
using namespace std;

int main() 
{
 	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	vector<long long int> a(100005), ans(100005);
  	long long int i,j,n,m;
    	cin>>n;
    	for(i=0;i<n;i++)
        	cin>>j,a[j]++;
   	ans[0]=0;
    	ans[1]=a[1];
    	for(i=2;i<100001;i++)
    	{
        	ans[i]=max(ans[i-1],ans[i-2]+i*a[i]);
    	}
    	cout<<ans[100000];
    	return 0;
}
