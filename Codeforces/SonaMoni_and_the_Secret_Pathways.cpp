#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 500000 + 5;
vector<int>adj[N];
int tree[N];

ll dis = 0;
void dfs(int u, int p){
    tree[u] = 1;
    for(auto v : adj[u]){
        if(v != p){
            dfs(v,u);
            tree[u] += tree[v];
            dis += tree[v];
        }
    }
}

void energy(int u,int p, int n){
    for(auto v : adj[u]){
        if(v != p){
            dis += n - 2 * tree[v];
            energy(v,u,n);
        }
    }
}

void solve(){
    ll n;
    cin>>n;

    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,-1);
    energy(1,-1,n);
    dis*=4;
    cout<<dis<<endl;
    
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
 