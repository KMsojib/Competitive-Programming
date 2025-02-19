#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void dor_mar(){
    ll n;   cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        int cn=0;
        for(int j=0;j<n;j++){
            if(a[j]>i){
                cn++;
            }
        }
        if(cn==i){
            cout<<cn<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        dor_mar();
    }

    return 0;
}
