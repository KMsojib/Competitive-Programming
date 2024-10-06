#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n, c, b;
        cin >> n >> c >> b;
        ll colour = (n/c);
        if(n%c){
            colour += 1;
        } 
        if (n - colour <= b){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }

    return 0;
}
