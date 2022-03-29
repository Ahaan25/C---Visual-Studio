#include <iostream>
using namespace std;
char stk[100], n=100, top=-1;
void push(int val){
   if(top>=n-1){
   cout<<"Stack is full."<<endl;
   }
   else{
      top++;
      stk[top]=val;
   }
}
void pop(){
   if(top<=-1){
   cout<<"Stack is full."<<endl;
   }
   else{
      cout<<"The removed element is: "<< stk[top] <<endl;
      top--;
   }
}
void disp(){
   if(top>=0){
      cout<<"The reversed string is: ";
      for(int i=top; i>=0; i--)
      cout<<stk[i]<<" ";
      cout<<endl;
   }
   else
   cout<<"Stack is empty.";
}
int main(){
   int ch;
   char val;
   cout<<"1)Add element"<<endl;
   cout<<"2)Remove element"<<endl;
   cout<<"3)Display the reversed string"<<endl;
   cout<<"4)Exit"<<endl;
   do{
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch){
         case 1:{
            cout<<"Enter value to be added:"<<endl;
            cin>>val;
            push(val);
            break;
        }
         case 2:{
            pop();
            break;
        }
         case 3:{
            disp();
            break;
        }
         case 4:{
            cout<<"Exit"<<endl;
            break;
        }
         default:{
            cout<<"Invalid input."<<endl;
        }
      }
   }
   while(ch!=4);
   return 0;
}
