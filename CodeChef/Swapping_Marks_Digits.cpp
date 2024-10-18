#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int a,b;    cin>>a>>b;
        int ra = ((a%10)*10)+(a/10);
        int rb = ((b%10)*10)+(b/10);

        if(a>b || a>rb || ra>b || ra>rb) cout<<"Yes\n";
	    else cout<<"No\n";
    }

    return 0;
}
