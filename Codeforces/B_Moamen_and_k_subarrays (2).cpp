#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n,k;    cin>>n>>k;
        vector<pair<int,int>>a(n);
        // o(n)

        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second = i;
        }
        sort(a.begin(),a.end()); // O(nlogn)
        int cn=1;
        for(int i=1;i<n;i++){
            if(a[i-1].second+1 != a[i].second){ // 1 2 --> 1+1 == 2? if(a[i].second - a[i-1].second != 1)   cn++;
                cn++;
            }
        }
        cout<<(cn<=k ? "Yes\n" : "No\n");
    }

    return 0;
}

// O(nlogn)*O(n)
/*
https://www.codingame.com/start/
https://www.joinhorizon.ai/subscribe?utm_source=gina-acosta
https://workat.tech/problem-solving/practice/two-sum
https://datalemur.com/questions

*/