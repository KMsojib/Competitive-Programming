#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    //fast_io;
    int t;  cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        vector<int>a(n);
        bool f = false;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(k>1 || is_sorted(a.begin(),a.end())){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
