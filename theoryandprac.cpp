#include<iostream>
using namespace std;
class student
{
    public:
    int rollno;
    char name[25];
    void get_details()
    {
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter roll number: ";
        cin>>rollno;
    }
    void disp()
    {
        cout<<"\nName of student: "<<name;
        cout<<"\nRoll number: "<<rollno;
    }
};
class theory
{
    public:
    int n, tmarks[25];
    void get_tmarks()
    {
        cout<<"\nEnter number of theory subjects: ";
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cout<<"Enter the marks of theory subject"<<i<<":";
            cin>>tmarks[i];
        }
    }
    void t_disp()
    {
        for(int i=0; i<n; i++)
        {
            cout<<"Theory marks in "<<i<<":"<<tmarks[i];
        }
    }
    int GetTheoryMark(int k) {
			return tmarks[k];
};
class practical
{
    public: 
    int n, pmarks[25];
    void get_pmarks()
    {
        cout<<"\nEnter number of practical subjects: ";
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cout<<"Enter the marks of practical subject"<<j<<":";
            cin>>pmarks[j];
        }
    }
    void p_disp()
    {
        for(int j=0; j<n; j++)
        {
            cout<<"Practical marks in "<<j<<":"<<pmarks[j];
        }
    }
        int GetPracticalMark(int k) {
			return pmarks[k];
};
class result :public practical, public theory, public student
{
    public: 
    int tot;
    int sum=0;
    void cal_tot()
    {
        for(int i=0; i<25; i++)
        {
            tot[i]=get_tmarks[i]+get_pmarks[i];
            sum=sum+tot[i];
        }
        cout<<"\nTotal Marks: "<<tot;
    }   
    void reslt()
    {
        int fail=0;
		for (int j = 0; j < 20; j++) {
			if (get_tmarks[j] + get_pmarks[j] < 50 && get_tmarks[j] + get_pmarks[j] != 0) {
				fail+=1;
			}
		}

		if (fail > 0) {
			cout<<"You failed the exam."<<endl;
		}
		else 0
			cout<<"You passed the exam."<<endl;
		}
    }
};
int main()
{
    result r1;
    r1.cal_tot;
    r1.reslt;
    r1.get_details;
    r1.disp;
    r1.get_tmarks;
    r1.get_pmarks;
    r1.t_disp;
    r1.p_disp;
}