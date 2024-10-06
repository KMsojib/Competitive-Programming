#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using lld = long double;
using ull = unsigned long long;

void solve()
{
    int n;
    cin>>n;
    int ans = 0;
    int array[100005];
    for(int i=2;i<=n;i++){
        if(array[i] == 0){
            for(int j=i;j<=n;j+=i){
                array[j]++;
            }
        }
        if(array[i] == 2){
            ans++;
        }
    }
    cout<<ans<<endl;
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1; // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

