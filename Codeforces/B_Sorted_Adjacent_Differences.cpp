
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int l=0,r=n-1;
        int f=0;
        vector<int>ans;
        while(l<=r){
            if(f%2==0){
                ans.push_back(a[r]);
                r--;
            }else{
                ans.push_back(a[l]);
                l++;
            }
            f++;
        }
        for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
