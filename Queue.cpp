#include<iostream>
using namespace std;
class Queue{
    int q[10];
    int r;
    int f;
    public:
    Queue(){
        r=f=-1;
    }
    void enqueue(int x);     
    int dequeue();
    void disp();
};
void Queue::enqueue(int x){
    if(f==-1){
        f++;
    }
    if(r==9)
    {
        cout<<"Queue is full. Remove one element to add another."<<endl;
    }
    else{
        q[++r] = x;
    }
}
int Queue::dequeue(){
    return q[++f];
}
void Queue::disp(){
    int i;
    for( i = f; i <= r; i++){
        cout<<q[i]<<endl;
    }
}
int main(){
    Queue op;
    op.enqueue(165);
    op.dequeue();
    op.enqueue(1);
    op.enqueue(107);
    op.enqueue(15);
    op.enqueue(112);
    op.dequeue();
    op.enqueue(104);
    op.enqueue(14);
    op.enqueue(54);
    op.dequeue();
    op.enqueue(10);
    op.enqueue(64);
    op.enqueue(34);
    op.enqueue(61);
    op.disp();
    return 0;
}