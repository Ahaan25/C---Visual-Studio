#include<iostream>
using namespace std;
void flip(int &a, int &b){ 
   int f;
   f=a;
   a=b;
   b=f;
}
void disp(int *arr, int size){
   for(int i = 0; i<size; i++)
      cout<<arr[i]<<" ";
   cout<<endl;
}
void selec(int *arr, int size){
   int i, j, min;
   for(i = 0; i<size-1; i++){
      min = i;
      for(j = i+1; j<size; j++)
         if(arr[j] < arr[min])
            min = j;
         flip(arr[i], arr[min]);
   }
}
int main(){
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];          
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++){
      cin>>arr[i];
   }
   cout<<"Array before Sorting: ";
   disp(arr, n);
   selec(arr, n);
   cout<<"Array after Sorting: ";
   disp(arr, n);
}