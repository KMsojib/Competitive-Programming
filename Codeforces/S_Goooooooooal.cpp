#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for(auto ch : s){
        if(ch == 'o'){
            cnt ++;
        }
    }
    cout << cnt << endl;
    return 0;
}