#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    vector<int>a(n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt = 0, people = 0;
    int i = 0;
    while (i < n) {
        if ((people + a[i]) <= m) {
            people += a[i];
            i++;
        } else {
            cnt++;
            people = 0;
        }
    }
    if (people > 0) {
        cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}

