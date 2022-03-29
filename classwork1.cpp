#include<iostream>
#include<string>

using namespace std;

class Student {
	string name;
	int Regno;
	public:
		void getStudentDetails() {
			string nameS;
			cout<<"Enter your name: ";
			cin>>nameS;
			name=nameS;
			int reg;
			cout << "Enter your Registration No: ";
			cin >> reg;
			Regno = reg;
	}

		void Disp_Details() {
			cout<<"Student's name is: "<<name<<endl;
			cout<<"Student's registration no is: "<< Regno<<endl;
	}
};

class marks :public Student {
	int marks[20];
	int num;
	public: 
		void GetMarks() {
			
			cout<<"How many subject's marks do you want to enter: "<<endl;
			cin>>num;
			for (int i = 0; i < num; i++) {
				int mark;
				cout<<"Enter Subject "<<i+1<<" marks";
				cin >> mark;
				marks[i]=mark;
			}
		}
		int GetMark(int k) {
			return marks[k];
		}
		void Disp_Marks() {
			for (int j = 0; j < num; j++) {
				cout<<"Subject "<<j+1<<" Marks is: "<< marks[j]<<endl;
			}
		}
};

class result :public marks {
	public:
	void Average() {
		int sum;
		for (int i = 0; i < 20; i++) {
			sum+=GetMark(i);
		}
		cout<<"Average Number of Marks is: "<<sum/20<<endl;
	}

	void getResult() {

			int fail=0;
		for (int j = 0; j < 20; j++) {
			if (GetMark(j) < 50 && GetMark != 0) {
				fail+=1;
			}
		}

		if (fail > 0) {
			cout<<"You failed the exam."<<endl;
		}
		else {
			cout<<"You passed the exam."<<endl;
		}
	}
};

int main() {
	result r1;
	int option=1;
	while(option!=0){
	cout<<"Enter number corresponding to your action."<<endl;
	}
	
}