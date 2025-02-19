#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
#define vi vector<int>

int main()
{
    fast_io;
    read(t);
    while(t--){
        read(n);
        vi a(n,0);
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            a[i]-=x;/// ekta khoroch er array tar mane bad jabe
        }

        for(int i=0;i<n;++i){
            int y;
            scanf("%d",&y);
            a[i]+=y;/// eta hocce amdr pocket e je taka ace oi array
        }
        sort(a.begin(),a.end(),greater<int>());
        int l=0,r=n-1;
        int cn=0;
        while(l<r){
            if(a[l]>-1 && a[r]>-1){///if two are negative then nothing to do
                cn++;
                l++;
                r--;
            }
            else if(a[l]<0 && a[r]<0){
                break;
            }

            else if(a[l]>-1){
                if(a[l]>=abs(a[r])){
                    cn++;
                    l++;
                    r--;
                }
                else{
                    r--;
                }
            }
        }
        cout<<cn<<"\n";
    }

    return 0;
}
