#include <bits/stdc++.h>
#define MAX 50
using namespace std;
    int twt=0, ttat=0, bt[MAX], tat[MAX], wt[MAX], size, i=0, j=0, avwt=0, avtat=0;
    int main(){
    cout<<"Enter number of processes(max 50): "<<endl;
    cin>>size;
    for(int i=0;i<=size;i++){
        cout<<"Enter burst time for processes(max 50): "<<endl;
        for(i=0;i<size;i++){
            cout<<"Process ["<<i+1<<"]:";
            cin>>bt[i];
        }
    }
    for(i=1;i<size;i++){
        wt[i]=0;
        for(int j=0;j<i;j++){
            wt[i]+=bt[j];
        }
    }
    for(i=0;i<size;i++){
        tat[i]=bt[i]+wt[i];
        twt+=wt[i];
        ttat+=tat[i];
        cout<<"\nProcess ["<<i+1<<"]"<<", Burst time is: "<<bt[i]<<", Waiting time is: "<<wt[i]<<", Turnaround time is: "<<tat[i]<<endl;
    }
    avwt=twt/size;
    avtat=ttat/size;
    cout<<"Average waiting time="<<avwt<<endl;
    cout<<"Average Turnaround time="<<avtat<<endl;
    return 0;
}