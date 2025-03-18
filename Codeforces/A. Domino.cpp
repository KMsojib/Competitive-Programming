#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int sumup = 0, sumdown = 0,test = 0,up = 0, down = 0;
    for(int i = 0;i < n;i++){
    cin >> up >> down;
    sumup += up;
    sumdown += down;
    test += ((up%2)!=(down%2));
}

    if(sumup %2 == 0 && sumdown % 2 == 0){
        cout<<"0"<<endl;
    }
    else if(test%2==0 && test>0){
        cout<<"1"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
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

