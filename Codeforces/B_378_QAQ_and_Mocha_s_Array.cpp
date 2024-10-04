#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        vector<ll>a(n);
        bool flag = false;
        for(auto &x : a){
            cin>>x;
            if(x == 1){
                flag = true;
            }
        }
        if(flag){
            cout<<"Yes\n";
            continue;
        }
        sort(a.begin(),a.end());
        vector<int>b;
        for(int i=1;i<n;i++){
            if(a[i]%a[0]){
                b.push_back(a[i]);
            }
        }
        sort(b.begin(),b.end());
        n = (int)b.size();
        for(int j=1;j<n;j++){
            if(b[j]%b[0]){
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }

    return 0;
}
