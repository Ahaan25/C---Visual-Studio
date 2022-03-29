#include <iostream>
using namespace std;
class stcks{
    int* arr;
    int size;
    int f1, f2;
    public:
    stcks(int n) 
    {
        size=n;
        arr=new int[n];
        f1=-1;
        f2=size;
    }
    void add1(int x){
        if(f1<f2-1){
            f1+=1;
            arr[f1]=x;
        }
        else{
            cout<<"Stack Overflow";
        }
    }
    int rem1(){
        if (f1>=0){
            int x=arr[f1];
            f1-=1;
            return x;
        }
        else{
            cout<<"Stack UnderFlow";
        }
    }
    void add2(int x){
    if(f1<f2-1){
            f2-=1;
            arr[f2]=x;
    }
        else{
            cout<<"Stack Overflow";
        }
    }
    int rem2(){
        if (f2<size){
            int x=arr[f2];
            f2+=1;
            return x;
        }
        else{
            cout <<"Stack UnderFlow";
        }
    }
    void prnt(){
        for (int i=0; i<size; i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    stcks ob(6);
    ob.add1(54);
    ob.add2(23);
    ob.add2(5);
    ob.add1(213);
    ob.add2(65);
    cout<<"\nRemoved element from stack 1 is: "<<ob.rem1();
    ob.add2(111);
    cout<<"\nRemoved element from stack 2 is: " <<ob.rem2();
    ob.prnt();
}