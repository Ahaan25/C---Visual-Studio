#include<iostream>
using namespace std;
class bankers_algorithm{
    int process,resources,seq[20],allocated[20][20],max[20][20],avl[20],ed;
    int com_pr();
public:
    void getdata();
    void findsafeseq();
};
void bankers_algorithm::getdata(){
    cout<<"Enter number of processes: ";
    cin>>process;
    cout<<"Enter number of resources: ";
    cin>>resources;
    cout<<"Enter number of instances available of each resource: ";
    for(int i=0; i<resources; i++){
        cin>>avl[i];
    }
    for(int i=0; i<process; i++){
        cout<<"Enter no. of instances of resources allocated to process p["<<i<<"]: ";
        for(int y=0; y<resources; y++){
            cin>>allocated[i][y];
        }
    }
    for(int i=0; i<process; i++){
        cout<<"Enter max no. of instances of resources process p["<<i<<"] needs: ";
        for(int y=0; y<resources; y++)
            cin>>max[i][y];
    }
}
int bankers_algorithm::com_pr(){
    int flag=0,fl=0;
    for(int i=0; i<process; i++){
        for(int j=0; j<ed; j++)
            if(i==seq[j]){
                fl=1;
                break;
            }
        if(fl!=1){
            for(int j=0; j<resources; j++){
                if(avl[j]-max[i][j]+allocated[i][j]<0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return i;
            }
            flag=0;
        }
        fl=0;
    }
    return -1;
}
void bankers_algorithm::findsafeseq(){
    int temp,flag=0;
    ed=0;
    for(int i=0; i<process; i++){
        temp=com_pr();
        if(temp!=-1){
            for(int y=0; y<resources; y++)
                avl[y]+=allocated[temp][y];
            seq[ed++]=temp;
        }
        else{
            cout<<"\nSystem is in unsafe state.";
            flag=1;
            break;
        }
    }
    if(flag!=1){
        cout<<"Safe sequence is: ";
        for(int i=0; i<ed; i++){
            cout<<"p["<<seq[i]<<"]  ";
        }
    }
}
int main(){
    bankers_algorithm ob;
    ob.getdata();
    ob.findsafeseq();
    return 0;
}