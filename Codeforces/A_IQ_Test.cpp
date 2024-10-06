#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        char grid[4][4];
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cin>>grid[i][j];
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int black = 0,white = 0;
                if(grid[i][j]=='#'){
                    black++;
                }
                else{
                    white++;
                }
                if(grid[i][j+1]=='#'){
                    black++;
                }
                else{
                    white++;
                }
                if(grid[i+1][j]=='#'){
                    black++;
                }
                else{
                    white++;
                }
                if(grid[i+1][j+1]=='#'){
                    black++;
                }
                else{
                    white++;
                }

                if(black >=3 || white >= 3){
                    cout<<"YES\n";
                    return 0;
                }
            }
        }

        cout<<"NO\n";
    }

    return 0;
}
