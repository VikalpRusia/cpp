#include<iostream>
using namespace std;

int main(){
	cout<<"enter 2 value"<<endl;
	int a,b;
	cin>>a>>b;
	cout<<"currently a="<<a<<" b="<<b<<endl;
	cout<<"Swapping values"<<endl;
	int t=a;
	a=b;
	b=t;
	cout<<"now a="<<a<<" b="<<b<<endl;
}
