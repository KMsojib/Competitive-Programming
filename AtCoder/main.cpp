// // // // // // // // // // #include<bits/stdc++.h>
// // // // // // // // // // using namespace std;
// // // // // // // // // // typedef long long int ll;
// // // // // // // // // // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     fast_io;
// // // // // // // // // //     int t;  cin>>t;
// // // // // // // // // //     while(t--){
// // // // // // // // // //         int n,x,y;
// // // // // // // // // //         cin>>n>>x>>y;
// // // // // // // // // //         if(x*y>=n){
// // // // // // // // // //             cout<<"YES\n";
// // // // // // // // // //         }
// // // // // // // // // //         else{
// // // // // // // // // //             cout<<"NO\n";
// // // // // // // // // //         }
// // // // // // // // // //     }

// // // // // // // // // //     return 0;
// // // // // // // // // // }


// // // // // // // // #include<bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // typedef long long int ll;
// // // // // // // // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     fast_io;
// // // // // // // //     int t;  cin>>t;
// // // // // // // //     while(t--){
// // // // // // // //         int x,y;
// // // // // // // //         cin>>x>>y;
// // // // // // // //         if(x*5 >=y){
// // // // // // // //             cout<<"YES\n";
// // // // // // // //         }
// // // // // // // //         else{
// // // // // // // //             cout<<"NO\n";
// // // // // // // //         }
// // // // // // // //     }

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // #include<bits/stdc++.h>
// // // // // // // using namespace std;
// // // // // // // typedef long long int ll;
// // // // // // // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // // // // // // int main()
// // // // // // // {
// // // // // // //     fast_io;
// // // // // // //     int t;  cin>>t;
// // // // // // //     while(t--){
// // // // // // //         int n;  cin>>n;
// // // // // // //         string s;   cin>>s;
// // // // // // //         int cn=0,temp=0;
// // // // // // //         for(int i=0;i<n;i++){
// // // // // // //             if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
// // // // // // //                 cout<<cn<<" "<<temp<<endl;
// // // // // // //                 cn = max(cn,temp);
// // // // // // //                 temp = 0;
// // // // // // //             }
// // // // // // //             else{
// // // // // // //                 temp++;
// // // // // // //             }
// // // // // // //         }
// // // // // // //         if(cn<=4){
// // // // // // //             cout<<"YES\n";
// // // // // // //         }
// // // // // // //         else{
// // // // // // //             cout<<"NO\n";
// // // // // // //         }
// // // // // // //     }

// // // // // // //     return 0;
// // // // // // // }

// // // // // // #include <iostream>
// // // // // // using namespace std;

// // // // // // int main() {
// // // // // // 	int t;
// // // // // // 	cin>>t;
// // // // // // 	while(t--){
// // // // // // 	    int n, cnt1=0, cnt2=0, max1=0, max2=0;
// // // // // // 	    cin>>n;
// // // // // // 	    int arr1[n], arr2[n];
// // // // // // 	    for(int i=0; i<n; i++){
// // // // // // 	        cin>>arr1[i];
// // // // // // 	        if(arr1[i]>0){
// // // // // // 	            cnt1++;
// // // // // // 	        }
// // // // // // 	        else cnt1=0;
// // // // // // 	        if(cnt1>max1){
// // // // // // 	            max1=cnt1;
// // // // // // 	        }
// // // // // // 	    }
// // // // // // 	    for(int i=0; i<n; i++){
// // // // // // 	        cin>>arr2[i];
// // // // // // 	        if(arr2[i]>0){
// // // // // // 	            cnt2++;
// // // // // // 	        }
// // // // // // 	        else cnt2=0;
// // // // // // 	        if(cnt2>max2){
// // // // // // 	            max2=cnt2;
// // // // // // 	        }
// // // // // // 	    }
// // // // // // 	    if(max2==max1){
// // // // // // 	        cout<<"Draw\n";
// // // // // // 	    }
// // // // // // 	    else if(max1>max2){
// // // // // // 	        cout<<"Om\n";
// // // // // // 	    }
// // // // // // 	    else cout<<"Addy\n";
// // // // // // 	}
// // // // // // 	return 0;
// // // // // // }

// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // typedef long long int ll;
// // // // // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // // // // int main()
// // // // // {
// // // // //     fast_io;
// // // // //     int t;  cin>>t;
// // // // //     while(t--){
// // // // //         int n;  cin>>n;
// // // // //         string s;   cin>>s;
// // // // //         int cn=0,temp=0;
// // // // //         for(int i=0;i<s.size();i++){
// // // // //             if(s[i]!='a' || s[i]!='e' || s[i]!='i' || s[i]!='o'|| s[i]!='u'){
// // // // //                 cn = max(temp,cn);
// // // // //                 temp=0;
// // // // //             }
// // // // //             else{
// // // // //                 temp++;
// // // // //             }
// // // // //         }
// // // // //         cn=max(cn,temp);
// // // // //         if(cn>4){
// // // // //             cout<<"NO\n";
// // // // //         }
// // // // //         else{
// // // // //             cout<<"YES\n";
// // // // //         }
// // // // //     }

// // // // //     return 0;
// // // // // }

// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // typedef long long int ll;
// // // // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // // // int main()
// // // // {
// // // //     fast_io;
// // // //     int t;  cin>>t;
// // // //     while(t--){
// // // //         int n,k;    cin>>n>>k;
// // // //         //vector<int>a(n);
// // // //         string s; 
// // // //         for(int i=0;i<n;i++){
// // // //             int x;  cin>>x;
// // // //             if(x<=k){
// // // //                 s+='1';
// // // //                 k-=x;
// // // //             }
// // // //             else{
// // // //                 s+='0';
// // // //             }
// // // //         }
// // // //         cout<<s<<endl;
// // // //     }

// // // //     return 0;
// // // // }

// // // //H number of spiral
// // // #include<bits/stdc++.h>
// // // using namespace std;
 
 
// // // int main()
// // // {
// // //     ios_base::sync_with_stdio(false);
// // //     cin.tie(0);
// // //     cout.tie(0);
// // //     int test;   cin>>test;
// // //     while (test--)
// // //     {
// // //         long long col,row;
// // //         cin>>row>>col;
 
// // //         //for coloum
// // //         if(col>row)
// // //         {
// // //             if(col%2==0)
// // //             {
// // //                 col--;
// // //                 cout<<(col*col+row)<<endl;
// // //             }
// // //             else
// // //             {
// // //                 cout<<(col*col-row+1)<<endl;
// // //             }
// // //         }
 
// // //         else
// // //         {
// // //             if(row%2==0)
// // //             {
// // //                 cout<<(row*row+1-col)<<endl;
// // //             }
// // //             else
// // //             {
// // //                 row--;
// // //                 cout<<(row*row+col)<<endl;
// // //             }
// // //         }
 
        
// // //     }
    
// // //     return 0;
// // // }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    string s;
// 	    cin>>s;
// 	    int count=0;
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
// 	        {
// 	            count=0;
// 	            continue;
// 	        }
// 	        else
// 	        {
// 	            count++;
// 	            if(count==4)
// 	            break;
// 	        }
// 	    }
// 	        if(count<4)
// 	        cout<<"YES"<<endl;
// 	        else
// 	        cout<<"NO"<<endl;
	    
// 	}
// 	return 0;
// }

// //B - Apartments

// // #include<bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // int main()
// // {
// //     fast_io;
// //     int t=1;  //cin>>t;
// //     while(t--){
// //         ll n,m,k;
// //         cin>>n>>m>>k;
// //         vector<ll>a(n),b(m);
// //         for(ll i=0;i<n;i++){
// //             cin>>a[i];
// //         }
// //         sort(a.begin(),a.end());
// //         for(ll j=0;j<m;j++){
// //             cin>>b[j];
// //         }
// //         sort(b.begin(),b.end());

// //         ll i=0,j=0,ans=0;
// //         while(i<n && j<m){
// //             if(abs(a[i]-b[j]) <=k){
// //                 i++;
// //                 j++;
// //                 ans++;
// //             }
// //             else if (a[i]-b[j]>k){
// //                 j++;
// //             }
// //             else{
// //                 i++;
// //             }
// //         }
// //         cout<<ans<<endl;
// //     }

// //     return 0;
// // }
