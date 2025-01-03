#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int count[8];
    memset(count, 0, sizeof(count));
    for (int i = 0; i < n; i++){
        cin >> a[i];
        count[a[i]]++;
    }
    if (count[5] > 0 or count[7] > 0){
        cout << "-1" << nl;
        return;
    }
    int n0 = 0;
    while (count[1] and count[2] and count[4]){
        n0++;
        count[1]--;
        count[2]--;
        count[4]--;
    }
    if (count[4]){
        cout << "-1" << nl;
        return;
    }
    int n1 = 0;
    while (count[1] and count[3] and count[6]){
        n1++;
        count[1]--;
        count[3]--;
        count[6]--;
    }
    if (count[3]){
        cout << "-1" << nl;
        return;
    }
    int n3 = 0;
    if (count[1] == count[2] and count[2] == count[6]){
        n3 += count[1];
    }
    else{
        cout << "-1" << nl;
        return;
    }
    for (int i = 0; i < n0; i++){
        cout << "1 2 4\n";
    }
    for (int i = 0; i < n1; i++){
        cout << "1 3 6\n";
    }
    for (int i = 0; i < n3; i++){
        cout << "1 2 6\n";
    }
}
int main(){
    solve();
    return 0;
}