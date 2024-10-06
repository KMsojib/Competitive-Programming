#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n),b(k);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<k;j++){
            cin>>b[j];
        }

        vector<int>ans;
        for(int i=0;i<k;i++){
            int temp = b[i];
            while(temp>=a[0]){
                for(int j=0;j<n;j++){
                    if(temp>=a[j]){
                        temp--;
                    }
                }
            }
            cout<<temp<<" ";
        }
        cout<<endl;
    }

    return 0;
}
