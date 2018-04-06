/*
矩阵相乘 
题目链接：https://www.nowcoder.com/practice/31e539ab08f949a8bece2a7503e9319a?tpId=40&tqId=21523&tPage=10&rp=10&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking 
*/ 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int r[1000][1000]={0};
int a[1000][1000]={0}; 
int b[1000][1000]={0};
int n,m;
void matrix(){
		
	if(m>=2){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
		b[i][j]=0;
		for(int k=1;k<=n;k++){		
			b[i][j]+=r[i][k]*a[k][j];
		
		}
			
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	r[i][j]=b[i][j];
	m--;
	matrix();
	}
}



int main(){
	
	cin>>n>>m;

	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){	
			cin>>a[i][j];
			r[i][j]=a[i][j];
		}

	matrix();	
	int j=1;
	for(int i=1;i<=n;i++){
		for( j=1;j<n;j++)
		cout<<r[i][j]<<" ";
	
		cout<<r[i][j];
		cout<<endl;
	}

	return 0;		
}











