#include <iostream.h>
#include <conio.h>
#include <string.h>
class BankSys
{
	char name [15];
	int accno;
	char acctype[15];
	float bal;
	public:
		BankSys()
		{
			accno=000;
			bal=0000.00;
		}
	void input();
	void deposit();
	void withdraw();
	void display();
};

void BankSys::input()
{
	cout<<"\n Enter all the details: ";
	cout<<"\n Enter Name: ";
	cin>>name;
	cout<<"\n Enter Account Number: ";
	cin>>accno;
	cout<<"\n Enter Account Type: ";
	cin>>acctype;
	cout<<"\n Enter Amount to be deposited: ";
	cin>>bal;
}
void BankSys::deposit()
{
	float a;
	cout<<"\n Deposit: ";
	cout<<"\n Deposit amount: ";
	cin>>a;
	bal=bal+a;

}
void BankSys::withdraw()
{
	float witham;
	cout<<"\n Withdraw: ";
	cout<<"\n Enter amount to withdraw: ";
	cin>>witham;
	bal=bal-witham;
}
void BankSys::display()
{
	cout<<"ACCOUNT DETAILS: ";
	cout<<"\n Name of holder: "<<name<<endl;
	cout<<"\n Account number: "<<accno<<endl;
	cout<<"\n Account type: "<<acctype<<endl;
	cout<<"\n Balance: "<<bal<<endl;
}
int main()
{
	BankSys BS;
	int choice=1;
	while(choice!=0)
	{cout<<"Enter 0 to exit\n 1) Create new account\n 2) Deposit\n 3)Withdraw\n 4)View Details";
	cin>>choice;
	switch(choice)
	{
		case 0: BS.display();
		cout<<"\n Accounts: ";
		break;
		case 1: BS.input();
		break;
		case 2: BS.deposit();
		break;
		case 3: BS.withdraw();
		break;
		case 4: BS.display();
		break;
		default: cout<<"Invalid input"<<endl;
	}

	}
}
