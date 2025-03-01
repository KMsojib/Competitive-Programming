#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isSquare(ll n) {
    int x = std::sqrt(n);
    return 1LL * x * x == n;
}

void solve()
{
    int n;
    std::cin>>n;

    ll sum = n*(n+1)/2;
    if(isSquare(sum)){
        cout<<"-1"<<endl;
        return;
    }

    std::vector<int> a;
    std::iota(a.begin(), a.end(), 1);
    for(int i =1;i<n;i++){
         if (isSquare(1LL * i * (i + 1) / 2)){
            std::swap(a[i], a[i-1]);
        }
    }

    for(auto x: a){
        std::cout << x << " \n"[x == a.back()];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}