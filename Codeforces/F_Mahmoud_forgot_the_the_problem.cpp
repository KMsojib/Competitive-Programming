#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    map<int, bool> mp;
    for (int i = 0; i < 4; i++){
        int x;
        cin >> x;
        mp[x] = true;
    }
    int i = 1;
    while (i <= 5){
        if (!mp[i]){
            cout << i << endl;
            return 0;
        }
        i++;
    }
    return 0;
}