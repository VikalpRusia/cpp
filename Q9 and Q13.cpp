#include<iostream>
#include<cstring>
using namespace std;

class BankAccount{
	string depositor;
	int accno;
	int typeOfAcc;
	double balanceAmt;
public :
	BankAccount(string depositor, int accno, int typeOfAcc, double balanceAmt){
		BankAccount::depositor=depositor;
		BankAccount::accno=accno;
		BankAccount::typeOfAcc=typeOfAcc;
		BankAccount::balanceAmt=balanceAmt;
	}
	bool deposit( double amt_deposited){
		if (amt_deposited > 0){
			BankAccount::balanceAmt += amt_deposited;
			return true;
		}
		return false;
	}
	bool withdrawl( double amt_withdrawn){
		if (amt_withdrawn > 0 && amt_withdrawn < balanceAmt ){
			balanceAmt-=amt_withdrawn;
			return true;
		}
		return false;
	}
	bool details(){
		cout<<"name "<<depositor<<endl;
		cout<<"balance "<<balanceAmt<<endl;
	}
};
int main(){
	BankAccount SHINCHAN("SHINCHAN", 123456789, 2, 20000);
}
