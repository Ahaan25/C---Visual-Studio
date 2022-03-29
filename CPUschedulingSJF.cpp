#include<bits/stdc++.h>
using namespace std;
int main(){
    int size, bt[20], wt[20], tat[20], twt=0, ttat=0, i, j, index[20], itemp, temp, avwt=0, avtat=0;
    cout<<"Enter Number of Processes(max 50): ";
    cin>>size; 
    cout<<"Enter Process Burst Time(max 50):"<<endl;
    for(i=0;i<size;i++){
        cout<<"Process ["<<i+1<<"]:";
        cin>>bt[i];
        index[i]=i;
    }
    for(i=0;i<size;i++){
        for(j=i;j<size;j++){
            if(bt[j]<bt[i]){
                swap(bt[i], bt[j]);
                swap(index[i], index[j]);
            }
        }
    }
    wt[0]=0;
    for(i=0;i<size;i++){
        wt[i+1]=wt[i]+bt[i];
        tat[i]=wt[i]+bt[i];
        twt=twt+wt[i];
        ttat=ttat+tat[i];
        cout<<"\nProcess ["<<index[i]+1<<"]"<<", Burst time is: "<<bt[i]<<", Waiting time is: "<<wt[i]<<", Turnaround time is: "<<tat[i]<<endl;
    }
    avwt=twt/size;
    avtat=ttat/size;
    cout<<"Average waiting time: "<<avwt<<endl;
    cout<<"Average Turnaround time:"<<avtat<<endl;
    return 0;
}