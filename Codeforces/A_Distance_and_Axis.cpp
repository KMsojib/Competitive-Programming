/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n<k){
            cout<<k-n<<endl;
        }else if(n%2==k%2){
            cout<<"0\n";
        }else{
            cout<<"1\n";
        }
    }

    return 0;
}
