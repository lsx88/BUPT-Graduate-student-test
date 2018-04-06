/*
完全二叉树 
题目链接:https://www.nowcoder.com/practice/9a10d5e7d99c45e2a462644d46c428e4?tpId=40&tqId=21526&tPage=10&rp=10&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int l;;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>l;
    if(((log(n)/log(2))+1)<l)	cout<<"EMPTY";
	else{
		int i=pow(2,l-1);
		for(;i<pow(2,l)-1;i++)
			cout<<a[i]<<" ";
		cout<<a[i];
	}
	return 0; 
}
