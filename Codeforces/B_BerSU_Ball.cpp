#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int m;  cin>>m;
        vector<int>b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int l = 0,r = 0, ans = 0;
        while(l<n && r<m){
            int max_dif = abs(a[l] - b[r]);
            if(max_dif <= 1){
                ans ++;
                l++,r++;
            }
            else if(a[l]>b[r]){
                r++;
            }
            else{
                l++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
