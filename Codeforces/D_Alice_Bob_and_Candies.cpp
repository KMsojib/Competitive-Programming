#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int alice = 0, bob = 0, l = 0, r = n-1,cn = 0;
        int prev_l = 0, prev_r = 0,eat_l = 0, eat_r = 0;
        while(l<=r)
        {
            if(cn%2 == 0)
            {
                int crn = 0;
                while(l <=r && crn <= prev_r)
                {
                    crn += a[l++];
                }
                eat_l += crn;
                prev_l = crn;
            }
            else
            {
                int crn = 0;
                while(l <= r && crn <= prev_l)
                {
                    crn += a[r--];
                }
                eat_r += crn;
                prev_r = crn;
            }
            cn ++;
        }
        cout<<cn<<" "<<eat_l<<" "<<eat_r<<endl;
    }
    return 0;
}
