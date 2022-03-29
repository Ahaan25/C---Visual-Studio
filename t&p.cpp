#include <iostream>
using namespace std;
class student
{
    char name[25];
    int rollno;
    public: 
    void get_details()
    {
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter roll number: ";
        cin>>rollno;
    }
    void stddisp()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"\nRoll number: "<<rollno<<endl;
    }
};
class tmarks
{
    public:
    int n;
    int tmarks[25];
    void get_tmarks()
    {
        cout<<"\nEnter number of theory subjects: ";
        cin>>n;
        cout<<"\nEnter theory marks: ";
        for(int i=0; i<n; i++)
        {
            cout<<"\nEnter marks for theory subject "<<i+1<<": ";
            cin>>tmarks[i];
        }
    }
    void tmarks_disp()
    {
        cout<<"\nMarks obtained are: "<<endl;
        for(int j=0; j<n; j++)
        {
            cout<<"\nMarks["<<j<<"]="<<tmarks[j]; 
        }
    }
};
class pmarks
{   
    public: 
    int n;
    int pmarks[25];
    void get_pmarks()
    {
        cout<<"\nEnter number of practical subjects: ";
        cin>>n;
        cout<<"\nEnter practical marks: ";
        for(int i=0; i<n; i++)
        {
            cout<<"\nEnter marks for practical subject "<<i+1<<": ";
            cin>>pmarks[i];
        }
    }
    void pmarks_disp()
    {
        cout<<"\nMarks obtained are: "<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<"\nMarks["<<i<<"]="<<pmarks[i]; 
        }
    }
};
class result: public tmarks, public pmarks, public student
{
    int tot=0;
    int avg;
    int k=1;
    int n;
    public:
    void calc()
    {
        for(int i=0; i<n; i++)
        {
            tot=tot+pmarks[i]+tmarks[i];
            avg=tot/n;
        }
    }
    void get_result()
    {
        for(int i=0; i<n; i++)
        {
            if(pmarks[i]+tmarks[i]<50)
            {
                cout<<"\nStudent failed subject number: "<<i+1<<endl;
                k=0;
            }
            else
            {
                cout<<"\nStudent passed subject: "<<i+1<<endl;
            }
        }
    }
    void disp_res()
    {
        cout<<"\nTotal marks obtained are: "<<tot<<endl;
        cout<<"\nAverage marks obtained: "<<avg<<endl;
        if(k==1)
        {
            cout<<"\nStudent has passed.";
        }
        else
        {
            cout<<"\nStudent has failed.";
        }
    }
};
int main()
{
    result r1;
    r1.get_details();
    r1.stddisp();
    r1.get_tmarks();
    r1.tmarks_disp();
    r1.get_pmarks();
    r1.pmarks_disp();
    r1.calc();
    r1.get_result();
    r1.disp_res();
}