
#include <bits/stdc++.h>
#define ll                    long long int

using namespace std;
int main() 
{
 	ios::sync_with_stdio(false);
  	cin.tie(0);

  	ll n, k;
    cin >> n >> k;
    
    priority_queue<ll>pq;
    ll pre[n + 1], a[n + 1];
    
    for(ll i = 1; i <= n; i++)
        cin >> a[i];
    
    pre[1] = a[1];
    
    for(ll i = 2; i <= n; i++)
        pre[i] = pre[i - 1] + a[i];
    
    pre[0] = 0;
    ll maximum = -LONG_MAX;
    
    for(ll i = n - k + 1, j = n; i >= 1; i--, j--){
        pq.push(pre[j]);
        maximum = max(maximum, pq.top() - pre[i - 1]);
    }
    
    cout << maximum << endl;
  	return 0;
}
