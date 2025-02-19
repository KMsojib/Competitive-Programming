#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES printf("YES\n")
#define NO printf("NO\n")
#define nl "\n"
#define mod 1000000007
#define in_range(a,b)    for(int i=a;i<b;i++)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
void solve()
{
    ll n;   cin>>n;
    vector<int>a(n);
    in_range(0,n)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    if( n <= 3)
    {
        if(n==2){
            cout<<"Yes"<<nl;
        }
        else{
            sort(a.begin(),a.end());
            if(a[2]+a[1] == a[2]+a[0]){
                cout<<"Yes"<<nl;
            }
            else{
                cout<<"No"<<nl;
            }
        }
    }   
    else{
        bool f= true;
        int l=1;
        sort(a.begin(),a.end());
        while(l+1<n)
        {
            int sum1=a[l]+a[l-1];
            int sum2=a[l]+a[l+1];
            if(sum1!=sum2)
            {
                f=false;
                break;
            }
            else{
                l++;
            }
        }
        if(f){
            cout<<"Yes"<<nl;
        }
        else{
            cout<<"No"<<nl;
        }
    }
    
}

int main()
{
    fast_io;
    int t=1;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}