#include <bits/stdc++.h>
using namespace std;
int main()
{
int queue[] = {2069, 1212, 2296, 2800, 544, 1618, 356, 1523, 4965, 3681};
int size = sizeof(queue) / sizeof(queue[0]);
int max_dist = 2500;
int head = 2150;
int count = 0;
int distance, cur_track;
vector<int> left, right;
vector<int> order;
string direction = "l";
if (direction == "l")
  {
left.push_back(0);
}
else if (direction == "r")
{
right.push_back(max_dist - 1);
}
for (int i = 0; i < size; i++)
{
if (queue[i] < head)
{
left.push_back(queue[i]);
}
if (queue[i] > head)
{
right.push_back(queue[i]);
}
}
sort(left.begin(), left.end());
sort(right.begin(), right.end());
int go = 2;
while (go--)
{
if (direction == "l")
{
for (int i = left.size() - 1; i >= 0; i--)
{
cur_track = left[i];
order.push_back(cur_track);
distance = abs(cur_track - head);
count += distance;
head = cur_track;
}
direction = "r";
}
else if (direction == "r")
{
for (int i = 0; i < right.size(); i++)
{
cur_track = right[i];
order.push_back(cur_track);
distance = abs(cur_track - head);
count += distance;
head = cur_track;
}
direction = "l";
}
}
cout << "Total head movement = "
<< count << endl;
cout << "Order is: ";
for (int i = 0; i < order.size(); i++)
{
cout << order[i] << " ";
}
return 0;
}
