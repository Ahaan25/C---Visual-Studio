#include <bits/stdc++.h>
using namespace std;
void shuffle_array(int arr[], int n){
    unsigned seed = 0;
    random_shuffle(arr, arr + n);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ", ";
    cout << endl;
}
int main()
{
 
    int a[] = {9, 2, 10, 3, 1, 6, 8, 4, 5, 7};
 
    int n = sizeof(a) / sizeof(a[0]);
 
    shuffle_array(a, n);
 
    return 0;
}