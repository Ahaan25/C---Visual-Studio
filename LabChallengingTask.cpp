#include <iostream>
using namespace std;
template <typename T>
T sum( T x, T y)
{
    return x + y;
}
int main()
{
	cout << "Sum of 6 and 5 is: " << sum(6, 5) << endl;
	cout << "Sum 3.14 and 9.8 is: " << sum(3.14, 9.8) << endl;
	cout << "Sum 6.2342 and 3.6533 is: " << sum(6.2342, 3.6533) << endl;
	return 0;
}