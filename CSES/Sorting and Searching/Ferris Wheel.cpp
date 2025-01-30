#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    ll n,x;
    ///scanf("%d%d",&n,&x);
    cin>>n>>x;
    vector<int>a(n);
 
    ll cn=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
 
    /*
        1. either take 2 or 1
        if take 2 then:
                case:1-> l+r<=x cn++; l++;r--;
                case:2->
                    su_cs:1-> r<=x cn++;
                    r--;
                    3 4 7 9
                    3+9>10
                    els
    */
    ll l=0,r=n-1;
    while(l<=r){
        if(a[l]+a[r]<=x){
            cn++;
            l++;
            r--;
        }
        else{
            if(a[r]<=x){
                cn++;
                r--;
            }
            else{
                l++;
                cn++;
            }
        }
    }
    cout<<cn<<endl;
 
    return 0;
}
