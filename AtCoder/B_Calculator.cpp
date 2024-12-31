#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cn = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '0'){
            cn++;
            if (i + 1 != s.size() && s[i + 1] == '0'){
                i += 1;
                continue;
            }
        }
        else{
            cn++;
        }
    }
    cout << cn << endl;
    return 0;
}