#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for (int i=-n;i<=n;++i){
		int a=abs(i);
		int x=n-a;
		for (int i=0;i<a;++i)cout<<"  ";
		for (int i=0;i<x;++i)cout<<i<<" ";
		for (int i=x;i>0;--i)cout<<i<<" ";
		
		cout<<0<<endl;
	}
}