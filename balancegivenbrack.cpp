#include <iostream>
#include <stack>
#include <string>
using namespace std;
void check (string str)
{
 stack <char> s;
 int len=str.length();
 char top;
 for(int i = 0; i< len; i++){
    if(str[i]=='('||str[i]=='{'||str[i]=='['){
    s.push(str[i]);
    }
    else
    {
        if(s.empty()){
        cout<<str<<"Parentheses are not balanced."<<endl;
        return;
    }
    else{
        top=s.top();
        if(str[i]==')' && top=='('||str[i]=='}' && top=='{'||str[i]==']' && top=='['){
        s.pop();
        }
    else{
        cout<<"Parentheses are not balanced."<<endl;
        return;
        }
    }
    }
}
    if(s.empty()){
    cout<<"Parentheses are balanced."<<endl;
    }
    else{
    cout<<"Parentheses are not balanced."<<endl;
    }
}
int main(){
    string test;
    cout<<"Enter parentheses: "<<endl;
    cin>>test;
    check(test);
    return 0;
}