#include<iostream>
using namespace std;

class Employee{
	int emp_id;
	float basic_salary;
public :
	void accept(int emp_id,float basic_salary){
		Employee::emp_id=emp_id;
		Employee::basic_salary=basic_salary;
	}
	void display(){
		float DA=25*basic_salary/100;
		int HRA=800;
		float tax=15*basic_salary/100;
		cout<<emp_id<<endl;
		cout<<"BASIC SALARY "<<basic_salary<<endl;
		cout<<"HRA "<<HRA<<"\t DA "<<DA<<"\t tax "<<tax<<endl;
	}
};
int main(){
	Employee sd;
	sd.accept(1234,345.543);
	sd.display();
}
