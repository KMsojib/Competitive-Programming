#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

bool sgn(ll x){
    return (x>0 ? 1 : 0);
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        int n;    cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll sum = 0;
        for(int i=0;i<n;i++){
            int crn = a[i];
            int j = i+1;
            while(j<n && sgn(crn) == sgn(a[j])){
                crn = max(crn,a[j]);
                j++;
            }

            i = j-1;
            sum += crn;
        }
        cout<<sum<<endl;     
    }

    return 0;
}

// pos neg pos
// neg pos neg

// maximum sum --> 