#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int length, breadth;
    cin >> length >> breadth;
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    cout << area << " " << perimeter << endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
