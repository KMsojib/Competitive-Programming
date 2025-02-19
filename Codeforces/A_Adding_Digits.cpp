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
    ll a,b,n;
    cin>>a>>b>>n;
    
    bool is_pos=false;
    for(int i=0; i<10; ++i){
        if((a*10+i)%b==0){
            cout<<a*10+i;
            string s(n-1,'0');
            cout<<s<<endl;
            is_pos=true;
            break;
        }
    }
    if(!is_pos){
        cout<<-1<<endl;
    }

    return 0;
}
