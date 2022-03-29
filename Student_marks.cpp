#include<iostream>
using namespace std;
class student
{
    char name[25];
    int roll;
    public: 
    void get_details()
    {
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter roll number: ";
        cin>>roll;
    }
    void  disp()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"\nRoll number: "<<roll<<endl;
    }
};
class marks: public student
{
    public: 
    int n;
    int marks[20];
    void get_marks()
    {
        cout<<"\nEnter number of subjects: ";
        cin>>n;
        cout<<"\nEnter marks: ";
        for(int i=0;i<n;i++)
        {
            if(marks[i]>50)
            {
            
            }
        }
    }
};
