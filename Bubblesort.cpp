#include<iostream>  
using namespace std;
int main ()
{
   int a[50], i, j, no, temp;
   cout<<"Enter number of elements in array(max 50): ";
   cin>>no;
   cout <<"Input array elements:\n";
   for(i=0; i<no; i++){
       cin>>a[i];
   }
   for(i = 0; i<no; i++) {
   cout<<a[i]<<" ";
}
cout<<endl;
for(i = 0; i<no; i++) {
   for(j = i+1; j<no; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
}
cout <<"Sorted array is:\n";
for(i = 0; i<no; i++) {
   cout <<a[i]<<" ";
   }
return 0;
}