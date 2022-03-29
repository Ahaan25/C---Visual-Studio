#include<bits/stdc++.h> 
using namespace std; 
void bestFit(int blockSize[], int m, int processSize[], int n){ 
    int allocation[n]; 
    memset(allocation, -1, sizeof(allocation)); 
    for(int i=0; i<n; i++){ 
        int btemp = -1; 
        for(int j=0; j<m; j++){ 
            if(blockSize[j]>=processSize[i]){ 
                if(btemp==-1){ 
                    btemp=j;
                } 
                else if(blockSize[btemp]>blockSize[j]){ 
                    btemp=j; 
                }
            } 
        } 
        if(btemp!=-1){ 
            allocation[i]=btemp; 
            blockSize[btemp]-=processSize[i]; 
        } 
    } 
    cout << "\nProcess No.\tProcess Size\tBlock no.\n"; 
    for(int i=0; i < n; i++){ 
        cout<<"   "<<i+1<<"\t\t"<<processSize[i]<<"\t\t"; 
        if (allocation[i]!=-1){
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
    bestFit(blockSize, m, processSize, n); 
    return 0 ; 
}