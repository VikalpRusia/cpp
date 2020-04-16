#include<iostream>
using namespace std;
int fact(int );
int main(){
	cout<<"enter number"<<endl;
	int n;
	cin>>n;
	cout<<"factorial = "<<fact(n);
}

int fact(int n){
	if (n==1){
		return 1;
	}
	return n*fact(n-1);
}
