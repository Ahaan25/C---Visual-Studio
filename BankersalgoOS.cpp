#include<bits/stdc++.h>
int main(){
    int resources;
    int *totalresources=new int[resources];
    int process;
    int **allocated=new int *[process];
    
    cout<<"Enter number of resources: ";
    cin>>resources;

    for(int i=0; i<resources; i++){
        cout<<"\nEnter total resources of "<<i+1<<": "<<endl;
        cin>>totalresources[i];
    }

    cout<<"Enter number of processes: "<<endl;
    cin>>process;

    for(int i=0; i<process; i++){
        
    }
}