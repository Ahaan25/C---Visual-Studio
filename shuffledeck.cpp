#include <bits/stdc++.h>
using namespace std;  
int main(){  
    array<int,20> foo {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};   
    unsigned seed=chrono::system_clock::now().time_since_epoch().count();  
    shuffle(foo.begin(), foo.end(), default_random_engine(seed));  
    cout<<"shuffled elements:";  
    for(int& x: foo){ 
        cout<<", "<<x;
    }  
    cout<<'\n';  
    return 0;  
}