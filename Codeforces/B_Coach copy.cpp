#include<bits/stdc++.h>
using namespace std;

vector<int> a[50];
bool v[50];

void dfs(int k, set<int> &s){
    if(v[k]){
        return;
    }
    v[k]=true;
    s.insert(k);
    for(auto u:a[k]){
        dfs(u, s);
    }
}

int main(){
    int n, m; cin>>n>>m;
    for(int i=0; i<m; i++){
        int x, y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    set<int> s[50];
    int k=0;
    for(int i=1; i<=n; i++){
        if(!a[i].size() || v[i]){
            continue;
        }
        dfs(i, s[k]);
        if(s[k].size()>3){
            cout<<"-1\n";
            return 0;
        }
        k++;
    }
    if(k>n/3){
        cout<<"-1\n";
        return 0;
    }
    for(int i=1; i<=n; i++){
        if(v[i]){
            continue;
        }
        for(int j=0; j<n/3; j++){
            if(s[j].size()<3){
                s[j].insert(i);
                break;
            }
        }
    }
    for(int i=0; i<n/3; i++){
        for(auto u:s[i]){
            cout<<u<<" ";
        }
        cout<<"\n";
    }
}