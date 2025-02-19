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
        ll sum=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        if(sum % 3 == 0){
            cout<<"0\n";
        }
        else if(sum<3){
            cout<<n<<"\n";
        }
        else{
            bool f = true;
            ll temp = sum;
            for(int i=0;i<n;i++){
                sum-=a[i];
                if(sum%3==0){
                    f=true;
                    break;
                }
            }
            if(f){
                cout<<"1\n";
            }
            else{
                ll cn = temp%3;
                cn=3-cn;
                if(cn<2){
                    cout<<"1\n";
                }
                else{
                    cout<<"2\n";
                }
            }
            
        }
    }

    return 0;
}
