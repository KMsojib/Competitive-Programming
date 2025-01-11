#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    set<int>st;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        st.insert(x);
    }
    printf("%d",st.size());
    return 0;
}