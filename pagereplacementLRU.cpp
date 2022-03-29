#include <bits/stdc++.h>
using namespace std;
int main()
{
int pages[] = {1,2,3,4,1,2,5,1,2,3,4,5};
int string_length = sizeof(pages) / sizeof(pages[0]);
int frames = 3;
unordered_set<int> set;
unordered_map<int, int> indexes;
int page_faults = 0;
for (int i = 0; i < string_length; i++)
{
if (set.size() < frames)
{
if (set.find(pages[i]) == set.end())
{
set.insert(pages[i]);
page_faults++;
}
indexes[pages[i]] = i;
}
else
{
if (set.find(pages[i]) == set.end())
{
int lru = INT_MAX, val;
for (auto it = set.begin(); it != set.end(); it++)
{
if (indexes[*it] < lru)
{
lru = indexes[*it];
val = *it;
}
}
set.erase(val);
set.insert(pages[i]);
page_faults++;
}
indexes[pages[i]] = i;
}
}
cout << "No. of faults = " << page_faults << endl;
return 0;
}