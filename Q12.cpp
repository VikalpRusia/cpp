#include<iostream>
using namespace std;
class sample{
	int a1=20;
	int a2=30;
	friend int max(sample trying);
};
int max(sample s){
	return std::max(s.a1,s.a2);
}
int main(){
	sample s;
	cout<<max(s);
}
