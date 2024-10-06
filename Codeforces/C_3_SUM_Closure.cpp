#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    int n;  cin>>n;
    vector<int>a,pos,neg;

    for(int i=0;i<n;i++){
        int x;  cin>>x;

        if(x>0){
            pos.push_back(x);
        }
        else if(x<0){
            neg.push_back(x);
        }
        else{
            if(a.size()<2){
                a.push_back(x);
            }
        }
    }

    if(pos.size()>2 || neg.size()>2){
        cout<<"NO\n";
        return;
    }

    for(int i: pos){a.push_back(i);}
    for(int i: neg){a.push_back(i);}

    n = a.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                bool ok = false;
                for(int l=0;l<n;l++){
                    if(a[i]+a[j]+a[k] == a[l]){
                        ok = true;
                        break;
                    }
                }
                if(!ok){
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
    cout<<"YES\n";
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
