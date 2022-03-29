#include <iostream>
#include <stack>
using namespace std;
int main(){
stack<int> S;
S.push(2);
S.push(6);
S.push(9);
S.push(1);
S.pop();
 while (!S.empty()) {
        cout << ' ' << S.top();
        S.pop();
    }
}