#include<iostream>
#include<string>

using namespace std;

class Student {
	string name;
	int Regno;
	public:
		void getDetails() {
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

class theory  {
	int theorymarks[20];
	int num;
	public: 
		void GetTMarks() {
			
			cout<<"How many subject's theory marks do you want to enter: "<<endl;
			cin>>num;
			for (int i = 0; i < num; i++) {
				int mark;
				cout<<"Enter Subject "<<i+1<<"theory marks";
				cin >> mark;
				theorymarks[i]=mark;
			}
		}
		int GetTheoryMark(int k) {
			return theorymarks[k];
		}
		void Disp_Marks() {
			for (int j = 0; j < num; j++) {
				cout<<"Subject "<<j+1<<"Theory Marks is: "<< theorymarks[j]<<endl;
			}
		}
};


class practical {
	int practicalMarks[20];
	int num;
public:
	void GetPMarks() {

		cout << "How many subject's practical marks do you want to enter: " << endl;
		cin >> num;
		for (int i = 0; i < num; i++) {
			int mark;
			cout << "Enter Subject " << i + 1 << "practical marks";
			cin >> mark;
			practicalMarks[i] = mark;
		}
	}
	int GetPracMark(int k) {
		return practicalMarks[k];
	}
	void Disp_Marks() {
		for (int j = 0; j < num; j++) {
			cout << "Subject " << j + 1 << "Theory Marks is: " << practicalMarks[j] << endl;
		}
	}
};




class result :public practical,public theory,public Student {
	public:
	void Total() {
		int sum;
		for (int i = 0; i < 20; i++) {
			sum+=GetTheoryMark(i)+GetPracMark(i);
		}
		cout<<"Total Number of Marks is: "<<sum<<endl;
	}

	void getResult() {

			int fail=0;
		for (int j = 0; j < 20; j++) {
			if (GetTheoryMark(j) + GetPracMark(j) < 50 && GetTheoryMark(j) + GetPracMark(j) != 0) {
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
	r1.getDetails();
	r1.Disp_Details();
	r1.GetTMarks();
	r1.GetPMarks();
	r1.Total();
	r1.getResult();
	
}