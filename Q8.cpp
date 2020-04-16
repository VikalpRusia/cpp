#include<iostream> 
#include<cstring>
using namespace std; 

class Student 
{ 
public :
	static int rollno; 
	static string name; 
};
int Student::rollno = 21; 
string Student::name = "Shinchan"; 

int main() 
{ 
	cout << "Student name = " << Student::name;
	cout << "Student rollno = " << Student::rollno;
} 

