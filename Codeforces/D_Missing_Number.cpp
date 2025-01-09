#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll sum = 0;
    for(int i=0;i<n-1;i++){
        ll x;
        cin>>x;
        sum += x;
    }
    ll Tsum = (n*(n+1)/2);
    cout<<Tsum - sum <<endl;
    return 0;
}