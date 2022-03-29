#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class Account
{	public:
	string accname;
	int accno;
	string acctype;
	int savbal;
	int intr;
	int yrs;
	float bal;
	float dep;
	float withd;
	float chq;
	float curbal;
	float cas;
	float fee;
	void input();
	void deposit();
	void withdraw();
	void display();
	void calculate();
	void cash();
	void cheque();
};
void Account::input()
{
	cout<<"\nEnter details: ";
	cout<<"\nEnter name: ";
	cin>>accname;
	accno=0000;
	bal=0000.00;
	cout<<"\nAccounnt type. 'savings' or 'current': ";
	cin>>acctype;
	cout<<"\nEnter account number: ";
	cin>>accno;
	cout<<"\nEnter amount to be deposited: ";
	cin>>bal;
}
void Account::deposit()
{
	cout<<"\nEnter amount to be deposited: ";
	cin>>dep;
	cout<<"\nAmount deposited: "<<dep<<endl;
	bal=bal+dep;
	cout<<"\nTotal balance= "<<bal<<endl;
}
void Account::display()
{
	cout<<"\nName of account holder: "<<accname<<endl;
	cout<<"\nAccount number: "<<accno<<endl;
	cout<<"\nType of account: "<<acctype<<endl;
	cout<<"\nBalance in account: "<<bal<<endl;
}
void Account::calculate()
{
	if(acctype=="savings"){
		cout<<"\nWe charge 4% interest.";
		cout<<"\nEnter amount to be withdrawn: ";
		cin>>withd;
		cout<<"\nEnter years for loan: ";
		cin>>yrs;
		savbal=bal-withd;
		cout<<"\nRemaining balance is: "<<savbal<<endl;
		intr=withd*yrs*0.04;
		cout<<"\nYou have to pay back "<<intr<<" by the end of "<<yrs<<" years.";
	}
	else{
	cout<<"\nYou do not have this facility!";
	}
}
void Account::withdraw()
{
	Account option;
	string opt;
	cout<<"\nEnter account number: ";
	cin>>accno;
	if(bal>500){
	if(acctype=="current"){
		cout<<"\nHow do you want to withdraw money?";
		cout<<"Cheque or cash?";
		cin>>opt;
			while('opt'!=0)
				{
					cout<<"Enter 0 to exit\n 1)Cheque\n 2)Cash";
						cin>>opt;
							switch('opt')
								{
									case '0': option.display();
									break;
									case '1': option.cheque();
									break;
									case '2': option.cash();
									break;
									default: cout<<"Invalid input";
								}
				}
	}
	}
	else {
	cout<<"\nYou don't have this facility!";
	}
}
void Account::cheque()
{
	cout<<"\nEnter amount to be withdrawn: ";
	cin>>chq;
	if(chq>bal){
		cout<<"\nNot enough balance";
	}
	else{
		curbal=bal-chq;
		cout<<"\nBalance left is "<<curbal<<endl;
	}
}
void Account::cash()
{
	cout<<"\nEnter amount to be withdrawn: ";
	cin>>cas;
	if(cas>bal){
		cout<<"\nNot enough balance";
	}
	else{
		savbal=bal-cas;
		cout<<"\nBalance left is "<<savbal<<endl;
	}
}
int main()
{
	Account mnoption;
	int mnchoice=1;
	while(mnchoice!=0)
	{
		cout<<"Enter 0 to exit\n 1) New account\n 2) Deposit\n 3) Display details\n 4) Withdraw\n 5) From savings";
		cin>>mnchoice;
		switch(mnchoice)
			{
				case 0: mnoption.display();
				cout<<"\nAccounts: ";
				break;
				case 1: mnoption.input();
				break;
				case 2: mnoption.deposit();
				break;
				case 3: mnoption.display();
				break;
				case 4: mnoption.withdraw();
				break;
				case 5: mnoption.calculate();
				break;
				default: cout<<"\nInvalid input!"<<endl;
			}
	}
}