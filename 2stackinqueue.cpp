#include <iostream>
using namespace std;
class obj{
    public:
    int f1=-1, r1=-1;
    int f2=-1, r2=-1;
    int q1[50];
    int q2[50];
    void add1(int x);
    int rem1();
    void add2(int x);
    int rem2();
    void add();
    void remove();
    void disp();
};
void obj::add1(int x){
    r1=r1+1;
    q1[r1]=x;
    if(f1==-1){
        f1==0;
    }
}
int obj::rem1(){
    int y;
    y=q1[f1];
    if(f1==r1){
        f1=r1=-1;
    }
    else{
        f1++;
    }
    return y;
}
void obj::add2(int x){
    r2++;
    q2[r2]=x;
    if(f2==-1){
    f2=0;
    }
}
int obj::rem2(){
    int y;
    y=q2[f2];
    if(f2==r2){
        f2=r2=-1;
    }
    else{
        f2++;
    }
    return y;
}
void obj::add(){
    int x;
    cout<<"Enter the number to be added: "<<endl;
    cin>>x;
    add1(x);
}
void obj::remove(){
    int y;
    while(f1!=r2){
        y=rem1();
        add2(y);
    }
    y=rem1();
    cout<<y;
    while(f2!=1){
        y=rem2();
        add1(y);
    }
}
void obj::disp(){
    int i;
    for(i=0; i<=r1; i++){
        cout<<q1[i]<<" "<<endl;
    }
}
int main(){
    obj ob;
    int inp=1;
    while(inp!=0){
        cout<<"\n1)Add element \n2)Remove element \n3)Display \n4)Exit";
        cout<<"\n Enter your choice";
        cin>>inp;
        switch(inp)
        {
            case 1:ob.add();
            break;
            case 2:ob.remove();
            break;
            case 3:ob.disp();
            break;
            default:cout<<"\nInvalid input."<<endl;
            break;
        }
    } 
    return 0;
}