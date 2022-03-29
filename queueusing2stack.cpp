#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> inp, outp;
    int numberofQueries;
    cin>>numberofQueries;
    int op, x;
    for(int i=0; i<numberofQueries; i++){
        cin>>op;
        if(op==1){
            cin>>x;
            inp.push(x);
        }
        if(op==2){
            if(!outp.empty()){
                outp.pop();
            }
            else{
                while(!inp.empty()){
                    outp.push(inp.top());
                    inp.pop();
                }
                outp.pop();
            }
        }
        if(op==3){
            if(!outp.empty()){
            cout<<outp.top()<<endl;
            }
            else{
                while(!inp.empty()){
                    outp.push(inp.top());
                    inp.pop();
                }
                cout<<outp.top()<<endl;
            }
        }
    }
    return 0;
}   