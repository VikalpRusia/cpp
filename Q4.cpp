#include<iostream>
using namespace std;
int main(){
	cout<<"enter 3 number"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"largest is ";
	cout<<max(a,max(b,c))<<endl;
}
