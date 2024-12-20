#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i = (int)s.size()-1;
        while(i>=0){
            if(s[i] == 'p'){
                cout<<char(s[i]+1);
            }
            else if(s[i] == 'q'){
                cout<<char(s[i]-1);
            }
            else{
                cout<<s[i];
            }
            i--;
        }
        cout<<endl;
    }

    return 0;
}
