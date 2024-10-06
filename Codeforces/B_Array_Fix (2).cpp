#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<int>ans={a[n-1]};
        for(int i=n-2;i>=0;i--){
            if(a[i]>ans.back()){
                ans.push_back(a[i]%10);
                ans.push_back(a[i]/10);
            }
            else{
                ans.push_back(a[i]);
            }
        }
        if(is_sorted(ans.begin(),ans.end(),greater<int>())){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
