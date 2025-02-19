
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    ll a, taxi = 0, one = 0, two = 0, three = 0, x = 0;
    cin >> a;
    int m[a];
    for(int i = 0; i < a; ++i){
        cin >> m[i];
        if(m[i] == 1)
        {
            taxi++;
        }
        if(m[i] == 2)
        {
            one++;
        }
        if(m[i] == 3)
        {
            two++;
        }
        if(m[i] == 4)
        {
            three++;
        }
}
    x = three;
    while(taxi != 0 && two != 0) {
        two = two - 1;
        taxi = taxi - 1;
        x = x + 1;
    }
    if(taxi == 0 && two != 0) {
        x = x + two;
        two = 0;
    }
    x = x + one / 2;
    if(one % 2 != 0) {
        if(taxi <= 2) {
           x = x + 1;
           one = 0;
           taxi = 0;
        }
        else {
            taxi = taxi - 2;
            x = x + 1;
            one = 0;
        }
    }
    if(taxi != 0) {
        x = x + taxi / 4;
        if(taxi%4 != 0) {
            x = x + 1;
        }
    }
    cout << x;

    return 0;
}

