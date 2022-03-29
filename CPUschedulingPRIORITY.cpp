#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int main(){
    int size;
    int p[MAX], priority[MAX], bt[MAX], wt[MAX], tat[MAX];
    int twt, ttat, avwt=0, avtat=0, i, j;
        cout<<"Enter total number of process(max 50): ";
        cin>>size;
        if(size<0||size>MAX){
            cout<<"Invalid input."<<endl;
        }
        for(i=0;i<size;i++){
            cout<<"\nProcess: ";
            cin>>p[i];
            cout<<"\nEnter burst time: ";
            cin>>bt[i];
            cout<<"\nEnter priority: "; 
            cin>>priority[i];
            p[i]=i+1;
        }
        for(i=0;i<size;i++){
             for(int j=i+1;j<size;j++){
                if(priority[i]>priority[j]){
                    swap(priority[i], priority[j]);
                    swap(bt[i], bt[j]);
                    swap(p[i], p[j]);
                } 
            }
        }
    ttat=0;
    twt=0;
    wt[0]=0;
    tat[0]=bt[0];
    for(i=1;i<size;i++){
        wt[i]=tat[i-1];
        twt=twt+wt[i];
        tat[i]=wt[i]+bt[i];
        ttat=ttat+tat[i];
    } 
    for(i=0;i<size;i++){
        cout<<"\nProcess ["<<p[i]<<"]"<<", Burst time is: "<<bt[i]<<", Waiting time is: "<<wt[i]<<", Turnaround time is: "<<tat[i]<<", Priority is: "<<priority[i]<<endl;
    }
    avwt=twt/size;
    avtat=ttat/size;
    cout<<"\n Average Wait Time : "<<avwt;
    cout<<"\n Average Turn Around Time : "<<avtat; 
}
