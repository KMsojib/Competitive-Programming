#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll> a(n);
        ll t_sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            t_sum += a[i];
        }
        sort(a.begin(),a.end());
        ll cn = 0;
        for(int i=0;i<n;i++){
            ll mini = t_sum - a[i] - y;
            ll maxi = t_sum - a[i] - x;
            int left = lower_bound(a.begin()+i+1, a.end(),mini) - a.begin();
            int right = upper_bound(a.begin()+i+1,a.end(),maxi) - a.begin();
            cn += (right - left);
        }
        cout<<cn<<endl;
    }
    return 0;
}