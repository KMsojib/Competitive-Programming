#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        int sum=0;
        for (int i = 0; i < n; i++){
           int x; cin>>x;
           sum += x/2;
           if(x%2!=0){
               sum++;
           }
        }
        cout<<sum<<endl;
    }

    return 0;
}
