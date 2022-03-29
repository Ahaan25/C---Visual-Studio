#include <bits/stdc++.h>
#define MAX 50
using namespace std;
int main(){
    int blocksize[MAX], processsize[MAX], blockno, processno, flag[MAX], allocated[MAX], i, j;
    for(i=0; i<MAX; i++){
        flag[i]=0;
        allocated[i]=-1;
    }
    cout<<"Enter number of blocks: "<<endl;
    cin>>blockno;
    cout<<"Enter block size: ";
    for(i=0; i<blockno; i++){
        cin>>blocksize[i];
    }
    cout<<"Enter number of processes: "<<endl;
    cin>>processno;
    cout<<"Enter process size: ";
    for(i=0; i<processno; i++){
        cin>>processsize[i];
    }
    for(i=0; i<processno; i++){
        for(j=0; j<blockno; j++){
            if((flag[j]==0)&&(blocksize[j]>=processsize[i])){
                allocated[i]=1;
                flag[j]=1;
                break;
            }
        }
    }
    cout<<"Block number: \t\tBlock size: \t\tProcess number: \t\tProcess size: \t\t";
    for(i=0; i<blockno; i++){
        cout<<"\n"<<i+1<<"\t\t\t"<<blocksize[i]<<"\t\t\t";
        if(flag[i]==1){
            cout<<allocated[i]+1<<"\t\t\t"<<processsize[allocated[i]];
        }
        else{
            cout<<"Memory not allocated.";
        }
    }
    return 0;
}
