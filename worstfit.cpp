#include<bits/stdc++.h> 
#include <iostream>
using namespace std; 
void worstFit(int blockSize[], int m, int processSize[], int n){ 
    int allocation[n]; 
    memset(allocation, -1, sizeof(allocation)); 
    for(int i=0; i<n; i++){ 
        int wtemp=-1; 
        for(int j=0; j<m; j++){ 
            if(blockSize[j]>=processSize[i]){ 
                if(wtemp==-1){ 
                    wtemp=j; 
                }
                else if(blockSize[wtemp]<blockSize[j]){ 
                    wtemp = j; 
                }
            } 
        } 
        if(wtemp!=-1){ 
            allocation[i]=wtemp; 
            blockSize[wtemp]-=processSize[i]; 
        } 
    }   
    cout<<"\nProcess No.\tProcess Size\tBlock no.\n"; 
    for(int i=0; i<n; i++){ 
        cout<<"   "<<i+1<<"\t\t"<<processSize[i]<<"\t\t"; 
        if(allocation[i]!=-1){
            cout<<allocation[i]+1;
        } 
        else{
            cout<<"Not Allocated";
        } 
        cout<<endl; 
    } 
} 
int main(){ 
    int blockSize[]={10, 15, 20, 30, 25}; 
    int processSize[]={22, 17, 12, 16}; 
    int m=sizeof(blockSize)/sizeof(blockSize[0]); 
    int n=sizeof(processSize)/sizeof(processSize[0]);   
    worstFit(blockSize, m, processSize, n); 
    return 0;
}