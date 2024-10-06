 #include<bits/stdc++.h>
 using namespace std;
 typedef long long int ll;
 #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
 int main()
 {
     fast_io;
     int t;  cin>>t;
     while(t--){
         int a[2];
         cin>>a[0]>>a[1];
         cout<<min(a[0],a[1])<<" "<<max(a[0],a[1])<<endl;
     }

     return 0;
 }

