#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() 
{
	freopen("paint.in","r",stdin);
	freopen("paint.out","w",stdout);
 	ios::sync_with_stdio(false);
  	cin.tie(0);
  	int a, b, c, d;
  	cin>>a>>b>>c>>d;
  	if((c<=b&&a<d)||(a<=d&&c<b))cout<<max(b,d)-min(a,c)<<endl;
  	else cout<<b-a+d-c<<endl;
  	return 0;
}
