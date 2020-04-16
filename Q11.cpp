#include<iostream>
using namespace std;
class sample{
	int length;
	int breadth;
public :
	sample(int length,int breadth){
		sample::length=length;
		sample::breadth=breadth;
	}
	friend int area(sample trying);
};
int area(sample s){
	return s.length*s.breadth;
}
int main(){
	sample s(20,30);
	cout<<area(s);
}
