#include <iostream>
using namespace std;
void m(int*, int, int, int);
void s(int a[], int p, int r){
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        s(a, p, q);
        s(a, q+1, r);
        m(a, p, q, r);
    }
}
void m(int a[], int p, int q, int r){
    int b[5];
    int i, j, k;
    k=0;
    i=p;
    j=q+1;
    while(i<=q && j<=r){
        if(a[i]<a[j])
        {
            b[k++]=a[i++];    
        }
        else
        {
            b[k++] = a[j++];
        }
    }
  
    while(i<=q){
        b[k++] = a[i++];
    }
  
    while(j<=r){
        b[k++]=a[j++];
    }
    for(i=r; i >= p; i--){
        a[i]=b[--k]; 
    } 
}
void prntarr(int a[], int no)
{
    int i;
    for (i=0; i<no; i++){
        cout<<"The array is: ";
    }
} 
int main()
{
    int arr[50], no;
    cout<<"Enter number of elements in array: "<<endl;
    cin>>no;
    cout<<"Enter "<<no<<" elements to be sorted: "<<endl;
    for(int i=0; i<no; i++){
        cin>>arr[i];
    }
    cout<<"Given array: \n";
    prntarr(arr, no);
    s(arr, 0, no-1);
    cout<<"Sorted array is: \n";
    prntarr(arr, no);
    return 0;
}