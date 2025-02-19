#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    ll n,m;    cin>>n>>m;
    ll a[n],b[m];

    for( int i=0; i<n; i++ ){
        cin>>a[i];
    }
    sort(a,a+n);
    for( int j=0; j<m; j++ ){
        cin>>b[j];
    }
    sort(b,b+m);
    ll ans=0;
    // int x=0,i=0,j=m-1;
    // while(x<n)
    // {
    //     int temp1=abs(a[x]-b[i]);
    //     int temp2=abs(a[x]-b[j]);
    //     if(temp1 >= temp2 ){
    //         ans+=temp1;
    //         x++;
    //         i++;
    //         //cout<<"temp1: "<<ans<<endl;
    //     }
    //     else{
    //         ans+=temp2;
    //         x++;
    //         j--;
    //         //cout<<"temp2: "<<ans<<endl;
    //     }
    // }
    // cout<<ans<<"\n";
    ll la=0,ra=n-1,lb=0,rb=m-1;
    while(la<=ra)
    {
        ll temp1 = abs(a[la]-b[rb]);
        ll temp2 = abs(a[ra]-b[lb]);

        if(temp1 >= temp2 ){
            ans+=temp1;
            la++;
            rb--;
        }
        else{
            ans+=temp2;
            lb++;
            ra--;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    fast_io;
    int t;  cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }

    return 0;
}
