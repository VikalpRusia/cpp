#include<iostream>
using namespace std;

int top(){
	cout<<"top without parameter"<<endl;
}
int top(int w){
	cout<<"top with one parameter int"<<endl;
}
int main(){
	top();
	top(2);
}
