
#include <bits/stdc++.h>
using namespace std;

int main() 
{
 	ios::sync_with_stdio(false);
  	cin.tie(0);
 
  	int n;
  	cin>>n;
  	vector< pair<int,int> > v(n);
  	fff(n)
  		cin>>v[i].first>>v[i].second;
  	sort(v.begin(),v.end());
  	int low = v[0].first, high = v[0].second, ans = high-low;int ans2 = 0;
  	for(int i=1;i<n;i++)
  	{
  		if(v[i].first<=high)high = max(high,v[i].second);
  		else
     {
      ans2 = max(ans2,v[i].first-high);
      low = v[i].first;
      high = v[i].second;
     }
  		ans = max(ans,high-low);
  	}
  	cout<<ans<<" "<<ans2<<endl;
  	return 0;
}
