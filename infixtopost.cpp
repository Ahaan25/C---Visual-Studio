#include<bits/stdc++.h>
#include<ctype.h>
#include<iostream>
using namespace std;
char opstck[100];
int top=-1;
bool oprt(char chrct){
    if(chrct=='+'||chrct=='-'||chrct=='*'||chrct =='/'){
        return true;
    }
    else{
    return false;
    }
}
bool oprnd(char chrct){
    if(!oprt(chrct) && chrct!='(' && chrct!=')'){
        return true;
    }
return false;
}
int comp(char op1, char op2){
if((op1=='*'||op1=='/') && (op2=='+'||op2=='-')){
    return -1;
    }
else if((op1=='+'||op1=='-') && (op2=='*'||op2=='/')){
    return 1;
    }   
return 0;
}
void push(char chrct){ 
    opstck[++top]=chrct;
}
char pop() { 
    return(opstck[top--]);
}
int evaluate(char* final){
    char ch;
    int i=0, op1, op2;
    while((ch=final[i++])!=0){
        if(isdigit(ch)){
            push(ch-'0');
        }
        else{
            op2=pop();
            op1=pop();
            switch(ch){
            case '+' : push(op1+op2); 
            break;
            case '-' : push(op1-op2); 
            break;
            case '*' : push(op1*op2);
            break;
            case '/' : push(op1/op2);
            break;
        }
    }
    }
    return opstck[top];
}
int main(){
stack<char> opstck;
string final="";
char inp[50];
cout<<"Enter an expression: ";
cin>>inp;
char *temp=inp;
while(*temp!='\0'){
if (oprnd(*temp)){
    final+=*temp;
    }
else if(oprt(*temp)){
    while (!opstck.empty() && opstck.top()!='(' && comp(opstck.top(),*temp)<=0){
        final += opstck.top();
        opstck.pop();  
    }
    opstck.push(*temp);
    }   
else if(*temp=='('){
    opstck.push(*temp);
    } 
else if(*temp == ')'){
    while(!opstck.empty()){
        if (opstck.top()=='('){
            opstck.pop();
            break;
        }
    final+=opstck.top();
    opstck.pop();
    }   
}
temp++;
}
while(!opstck.empty()){
    final+=opstck.top();
    opstck.pop();
}
cout<<"Postfix is: "<<final<<endl;
cout<<"The value of the expression is: "<<endl;
cout<<evaluate(inp)<<endl;
return 0;
}
