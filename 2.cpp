/*
题目链接：https://www.nowcoder.com/practice/162753046d5f47c7aac01a5b2fcda155?tpId=40&tqId=21520&tPage=10&rp=10&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
priority_queue<int>由大到小排序 
priority_queue<int,vector<int>,greater<int>> 由小到大排序 
可以重载优先符 
参考链接：
https://blog.csdn.net/pzhu_cg_csdn/article/details/79166858
https://blog.csdn.net/xiaoquantouer/article/details/52015928 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int>> q;
int main(){
	
	int n;
	cin>>n;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		q.push(a);
	}
	int b,c;
	int r=0;
	while(q.size()>1){
		b=q.top();
		q.pop();
		c=q.top();
		q.pop();
		r+=b+c;
		q.push(b+c);
	
	}
	cout<<r;
	
	
	
	return 0;
}
