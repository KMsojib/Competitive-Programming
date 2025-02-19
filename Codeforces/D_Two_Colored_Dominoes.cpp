#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    // int n,m;
    // cin>>n>>m;
    
    // vector<string>s(n);
    // for(int i=0;i<n;i++){
    //    cin>>s[i];
    // }

    // //check row wise
    // for(int i=0;i<n;i++){
    //     int tot=0;
    //     for(int j=0;j<m;j++){
    //         if(s[i][j]=='U' || s[i][j]=='D'){
    //             tot++;
    //         }
    //     }
    //     if(tot%1){
    //         cout<<"-1\n";
    //         return;
    //     }
    // }

    // //for col wise
    // for(int i=0;i<m;i++){
    //     int tot=0;
    //     for(int j=0;j<n;j++){
    //         if(s[i][j]=='L' || s[i][j]=='R'){
    //             tot++;
    //         }
    //     }
    //     if(tot%1){
    //         cout<<"-1\n";
    //         return;
    //     }
    // }
    // vector<string>ans=s;
    // vector<vector<bool>>vis(n,vector<bool>(m,false));
    // for(int i=0;i<n;i++){
    //     int col=0;
    //     for(int j=0;j<m;j++){
    //         if(vis[i][j]){
    //             continue;
    //         }
    //         if(s[i][j]=='U'){
    //             vis[i][j]=1;
    //             vis[i+1][j]=1;//row -->1 i+1 is -->2
    //             if(col == 0){
    //                 ans[i][j]='W';
    //                 ans[i+1][j]='B';
    //             }
    //             else{
    //                 ans[i][j]='B';
    //                 ans[i+1][j]='W';
    //             }
    //             col^=1;
    //         }
    //     }
    // }

    // //for column
    // for(int i=0;i<m;i++){
    //     int row=0;
    //     for(int j=0;j<n;j++){
    //         if(vis[j][i]){
    //             continue;
    //         }
    //         if(s[j][i]=='L'){
    //             vis[j][i]=1;
    //             vis[j][i+1]=1;
    //             if(row==0){
    //                 ans[j][i]='W';
    //                 ans[j][i+1]='B';
    //             }
    //             else{
    //                 ans[j][i]='B';
    //                 ans[j][i+1]='W';
    //             }
    //             row^=1;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<ans[i]<<endl;
    // }
     int n,m;
    cin>>n>>m;
    vector<string>s(n);

    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    for(int i=0; i<n; i++)
    {
        int tot = 0;
        for(int j=0; j<m; j++)
        {
            if(s[i][j]=='U' || s[i][j]=='D')
            {
                tot++;
            }
        }
        if(tot%2)
        {
            cout<<"-1\n";
            return;
        }
    }
    for(int i=0; i<m; i++)
    {
        int tot = 0;
        for(int j=0; j<n; j++)
        {
            if(s[j][i]=='L' || s[j][i]=='R')
            {
                tot++;
            }
        }
        if(tot%2)
        {
            cout<<"-1\n";
            return;
        }
    }

    vector<string>ans = s;
    vector<vector<bool> >vis(n,vector<bool>(m,false));

    for(int i=0; i<n; i++)
    {
        int col = 0;
        for(int j=0; j<m; j++)
        {
            if(vis[i][j])
                continue;
            if(s[i][j]=='U')
            {
                vis[i][j] = 1;
                vis[i+1][j] = 1;
                if(col==0)
                {
                    ans[i][j] = 'W';
                    ans[i+1][j] = 'B';
                }
                else
                {
                    ans[i][j] = 'B';
                    ans[i+1][j] = 'W';
                }
                col^=1;
            }
        }
    }

    for(int i=0; i<m; i++)
    {
        int col = 0;
        for(int j=0; j<n; j++)
        {
            if(vis[j][i])
                continue;
            if(s[j][i]=='L')
            {
                vis[j][i] = 1;
                vis[j][i+1] = 1;
                if(col==0)
                {
                    ans[j][i] = 'W';
                    ans[j][i+1] = 'B';
                }
                else
                {
                    ans[j][i] = 'B';
                    ans[j][i+1] = 'W';
                }
                col^=1;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<"\n";
    }

}



int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
