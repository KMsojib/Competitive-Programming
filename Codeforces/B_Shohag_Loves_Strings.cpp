#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i + 1 < (int)s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << s.substr(i, 2) << '\n';
            return;
        }
    }
    for (int i = 0; i + 2 < (int)s.size(); i++)
    {
        if (s[i] != s[i + 1] and s[i] != s[i + 2] and s[i + 1] != s[i + 2])
        {
            cout << s.substr(i, 3) << '\n';
            return;
        }
    }
    cout << "-1" << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 