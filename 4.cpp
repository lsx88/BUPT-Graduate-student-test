#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cmp(int a,int b){
	return a<b;
}
int main(){
	int n;
	int k;
	cin>>n;
	bool flag[999999]={0};
	int a[n],b,j=0;
	for(int i=0;i<n;i++){
		cin>>b;
		if(flag[b]==0){
			flag[b]=1;
			a[j]=b;
			j++;
		}
		
	}
	cin>>k;
	sort(a,a+j,cmp);
	
	cout<<a[k-1];
	return 0;
}
