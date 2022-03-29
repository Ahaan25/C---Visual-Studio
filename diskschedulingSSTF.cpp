#include <bits/stdc++.h>
using namespace std;
int diff;
int main()
{
int queue[] = {2069, 1212, 2296, 2800, 544, 1618, 356, 1523, 4965, 3681};
int size = sizeof(queue) / sizeof(queue[0]);
int head = 2150;
int diff[size][2]={{0, 0}};
int order = 0;
int movement[size + 1] = {0};
for (int i = 0; i < size; i++)
{
movement[i] = head;
for (int i = 0; i < size; i++)
{
diff[i][0] = abs(head - queue[i]);
}
int index = -1;
int minimum = 1e9;
for (int i = 0; i < size; i++)
{
if (!diff[i][1] && minimum > diff[i][0])
{
minimum = diff[i][0];
index = i;
}
}
diff[index][1] = 1;
order += diff[index][0];
head = queue[index];
}
movement[size] = head;
cout << "Total head movement = "<< order << endl;
cout << "Order is: ";
for (int i = 0; i <= size; i++)
{
cout << movement[i] << " ";
}
return 0;
}
