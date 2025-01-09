#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    int i = 0, j = 0;
    while (j < (int)s.size()){
        if (s[i] == s[j]){
            j++;
        }
        else{
            cnt = max(cnt, j - i);
            i = j;
        }
    }
    cnt = max(cnt, j - i);
    cout << cnt << endl;
    return 0;
}