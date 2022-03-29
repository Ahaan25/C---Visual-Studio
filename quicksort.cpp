#include <iostream>
using namespace std;
void swap(int* a, int* b){ 
    int t=*a; 
    *a=*b; 
    *b=t; 
}
int part (int arr[], int l, int h){ 
    int p = arr[h];  
    int i = (l-1);   
   
    for (int j=l; j<=h- 1; j++){
        if (arr[j]<=p) 
        { 
            i++;  
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i+1], &arr[h]); 
    return (i+1); 
} 
void qs(int arr[], int low, int high){ 
    if (low<high){
        int piv = part(arr, low, high); 
        qs(arr, low, piv-1); 
        qs(arr, piv+1, high); 
    } 
} 
void displayArray(int arr[], int size){ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
      
} 
int main(){ 
    int arr[]={42,21,7,65,51,11,75,32}; 
    int n=sizeof(arr)/sizeof(arr[0]); 
    cout<<"Input array"<<endl;
    displayArray(arr,n);
    cout<<endl;
    qs(arr, 0, n-1); 
    cout<<"Array sorted with quick sort"<<endl; 
    displayArray(arr,n); 
    return 0; 
}