/*
ÌâÄ¿Á´½Ó:https://www.nowcoder.com/practice/abdd24fa839c414a9b83aa9c4ecd05cc?tpId=40&tqId=21528&tPage=10&rp=10&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct comp{
	int z;
	int x;
	int m;
}c[1000];
void output(int n){
	for(int i=0;i<=n;i++)
	cout<<c[i].z<<" "<<c[i].x<<" "<<c[i].m<<" ";
	cout<<endl;
}	
int main(){
	int n;
	cin>>n;
	string str;
	int d=0;
	int count=0;
	for(int i=1;i<=n;i++){
		cin>>str;

		if(str=="Pop"){
			if(count==0) cout<<"empty"<<endl;
			else{
				int max=0;
				int num;
				for(int i=0;i<=d;i++){
					if(c[i].m>max){
						max=c[i].m;
						num=i;
					}
					else if(c[i].m==max&&c[i].x<c[num].x){
						max=c[i].m;
						num=i;
					}
					else ;
				}
				
				cout<<c[num].z<<"+i"<<c[num].x<<endl;
				//output(d);
				count--;
				c[num].z=0;
				c[num].x=0;
				c[num].m=0;
				cout<<"SIZE = "<<count<<endl;
			} 
		}
		else{
			int a,b;
			scanf("%d+i%d",&a,&b);
			c[d].z=a;
			c[d].x=b;
			c[d].m=a*a+b*b;
			d++;
			count++;
			cout<<"SIZE = "<<count<<endl;
		}
	}
	
	
	return 0;
}




