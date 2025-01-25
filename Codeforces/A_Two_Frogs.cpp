#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;   scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        int n,a,b;
        scanf("%d%d%d",&n,&a,&b);
        if(abs(a-b) % 2 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
