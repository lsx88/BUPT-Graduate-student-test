#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void find(int x,int n,int a[]){
	int flag=0;

	for(int i=1;i<=n;i++){
		if(x==a[i]) {
		cout<<"YES"<<endl;
		
		break;
	}
	if(i==n) cout<<"NO"<<endl;
	}

	
}
int main(){
	int n;
	int m;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	int b[m];
	for(int i=1;i<=m;i++){
		cin>>b[i];
	}	
	
	for(int i=1;i<=m;i++){
		//find(b[i],n,a);
		int f=0;
		for(int j=1;j<=n;j++){
		if(b[i]==a[j]){
		cout<<"YES"<<endl;
		f=1;
			break;
		}
	if(j==n)
		cout<<"NO"<<endl;
	}	
	
}
	return 0;
}
