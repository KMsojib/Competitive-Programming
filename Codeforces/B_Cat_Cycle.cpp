
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
        int n,k;    cin>>n>>k;
        k--;
        if(n%2==0){
            int gap=(k%n);
            gap++;
            cout<<gap<<"\n";
        }
        else{
            int gap=n/2;
            int ans=((k/gap)+k)%n;
            ans++;
            cout<<ans<<"\n";
        }
    }

    return 0;
}
