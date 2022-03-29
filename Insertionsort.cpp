#include<iostream>  
using namespace std;
void insersort(int a[], int no){
    int i, temp, j;
    for(i=1; i<no; i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}
void disp(int a[], int no){
    int i;
    for(i=0; i<no; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={100, 250, 50, 300, 0, 400};
    int no=6;
    insersort(a, 6);
    disp(a, 6);
    return 0;
}