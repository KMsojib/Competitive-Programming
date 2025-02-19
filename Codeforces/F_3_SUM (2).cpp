#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;  cin>>n;
     int cn[10]={};
        for(int i=0;i<n;i++){
            int x;  cin>>x;
            cn[x%10]++;
        }

        vector<int>ans;
        for(int i=0;i<10;i++){
            for(int j=0;j<min(cn[i],3);j++){
                ans.push_back(i);
            }
        }
        bool f = false;
        int len = ans.size();
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                for(int k=j+1;k<len;k++){
                    if((ans[i]+ans[j]+ans[k])%10==3){
                        cout<<"YES"<<endl;
                        return;
                    }
                }
            }
        }
        cout<<"NO"<<endl;
}

int main()
{
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
