#include<iostream>
#include<string>
#include<fstream>
using namespace std;


class Subject {
public:
	string marks = "notAssigned";
	string name = "notAssigned";
};



class Student;
int stuLength;


class Student {
private:
	string name;
	Subject s1[5];
public:
	string regNo;
	void updatesubjects();
	void viewInfo();
	void UpdateInfo(int i, string marks);
	void UpdateInfo(int i, string a1, string marks);
	void addName(string a1);

};

Student sub1[30];

int matchStudent() {
	string regno;
	cout << "Enter Registration Number.\n";
	cin >> regno;
	for (int i = 0; i < 30; i++) {
		if (sub1[i].regNo == regno) {
			return i;

		}
	}


}

void Student::updatesubjects()
{
	cout << "Enter your subjects\n";
	for (int i = 0; i < 5; i++) {
		string sub;
		cin >> sub;
		s1[i].name=sub;
		
	}
}

void Student::viewInfo() {
	cout << "Name: " << name << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ". " << s1[i].name << ": " << s1[i].marks << endl;
	}
}

void Student::UpdateInfo(int i, string a1, string marks) {

	s1[i-1].name = a1;
	s1[i-1].marks = marks;
}

void Student::UpdateInfo(int i, string marks) {
	s1[i-1].marks = marks;

}

void Student::addName(string name) {
	name=name;
}

void RegisterStudent() {
	Student s1;
	string name;
	string regno;
	cout << "Enter The Name:\n";
	cin >> name;
	cout << "Enter RegNo\n";
	s1.addName(name);
	cin >> regno;
	s1.regNo = regno;
	sub1[stuLength] = s1;
	stuLength++;
	cout<<"Student Registered!";
}

int main() {
	do {

		cout << "Enter the number corresponding to your action\n";
		cout << "1.Register Student\n";
		cout << "2.Update Subjects\n";
		cout << "3.ShowInfo\n";
		cout << "4.UpdateInfo\n";
		cout << "5.Exit\n";
		int num;
		cin >> num;
		switch (num)
		{
		case 1:
		{
			RegisterStudent();
			break;
			}
		case 2:
		{
			int j = matchStudent();
			sub1[j].updatesubjects();
			break;}
		case 3:
		{
			int k = matchStudent();
			sub1[k].viewInfo();
			break;}
		case 4:{
			int l = matchStudent();
			cout << "What do you want to update?\n1.Subject and Marks\n2.Marks\n";
			int num;
			cin >> num;
			

			switch (num) {
			case 1:{
				
				
				int subNo;
				cout << "Enter the number corresponding to subject\n";
				sub1[l].viewInfo();
				cin>>subNo;
				string sub;
				string marks;
				cout<<"Enter New Subject Name\n";
				cin >> sub;
				cout << "Enter Marks\n";
				cin>>marks;
				sub1[l].UpdateInfo(subNo,sub,marks);
				break;
				}

			case 2: {
				int subNo;
				sub1[l].viewInfo();
				cout << "Enter the number corresponding to subject\n";
				cin >> subNo;
				string marks;
				cout << "Enter Marks\n";
				cin >> marks;
				sub1[l].UpdateInfo(subNo,marks);
				break;
			}
			}
			}
			break;
		case 5:{
			return 0;
			}
		}

	} while (1);

}

