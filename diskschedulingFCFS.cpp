#include <bits/stdc++.h>
using namespace std;
int main()
{
int queue[] = {2069, 1212, 2296, 2800, 544, 1618, 356, 1523, 4965, 3681};
int size = sizeof(queue) / sizeof(queue[0]);
int head = 2150;
int seek_count = 0;
int movement, cur_track;
for (int i = 0; i < size; i++)
{
cur_track = queue[i];
movement = abs(cur_track - head);
seek_count += movement;
head = cur_track;
}
cout << "Total diff: " << seek_count << endl;
cout << "Order of traversal is: ";
for (int i = 0; i < size; i++){
cout << queue[i] << " ";
}
return 0;
}
