#include <iostream.h>
#include <conio.h>
#include <string.h>
using namespace std;
class Student
{
	string name[20];
	int regNo;
	Subject s1[5];	
	public:
		Student()
		{
			regNo=000000;
		}
	void newreg();
	void updatesubjects();
	void viewsubjects();
	void entermarks();
};
void Student::newreg()
{
	string course;
	cout<<"\nEnter name:";
	cin>>name;
	cout<<"\nEnter registration number:";
	cin<<regNo;
}
void Student::updatesubjects()
{
	cout << "Enter your subjects";
	for(int i=0;i<5;i++){
	string sub;
	cin >> sub;
	for (int i = 0; i < 5; i++) {
		if (s1[i].name == sub) {
			cout<< "Subject already entered";
		}
	}
	}
}
void views	
int main(){
Student s1;
s1.updatesubjects;
return 0;
}