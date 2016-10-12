
#include <bits/stdc++.h>
using namespace std;

int main() 
{
 	ios::sync_with_stdio(false);
  	cin.tie(0);
  	int n;
  	cin>>n;
  	vector<int> a(n), b(n), c(n), d(n);
  	for(int i=0;i<n;i++)cin>>a[i]>>b[i]>>c[i]>>d[i];
  	vector<int> v1(n*n), v2(n*n);
  	int cnt = 0;
  	for(int i=0;i<n;i++)
  		for(int j=0;j<n;j++)
  			v1[cnt++] = a[i]+b[j];
  	cnt = 0;
  	for(int i=0;i<n;i++)
  		for(int j=0;j<n;j++)
  			v2[cnt++] = c[i]+d[j];
  	int ans = 0;
  	sort(v1.begin(),v1.end());
  	sort(v2.begin(),v2.end());
  	for(int i=0;i<n*n;i++)
  		if(binary_search(v1.begin(),v1.end(),-v2[i]))
  			ans+=upper_bound(v1.begin(),v1.end(),-v2[i])-lower_bound(v1.begin(),v1.end(),-v2[i]);
  	cout<<ans<<endl;

  	return 0;
}
