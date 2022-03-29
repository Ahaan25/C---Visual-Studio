#include <bits/stdc++.h>
using namespace std;
int main()
{
int pages[] = {1,2,3,4,1,2,5,1,2,3,4,5};
int string_length = sizeof(pages) / sizeof(pages[0]);
int frames = 4;
unordered_set <int> set;
queue<int> indexes;
int page_faults = 0;
for (int i = 0; i < string_length; i++)
{
if (set.size() < frames)
{
if (set.find(pages[i]) == set.end())
{
set.insert(pages[i]);
page_faults++;
indexes.push(pages[i]);
}
}
else
{
if (set.find(pages[i]) == set.end())
{
int val = indexes.front();
indexes.pop();
set.erase(val);
set.insert(pages[i]);
indexes.push(pages[i]);
page_faults++;
}
}
}
cout << "No. of faults = " << page_faults << endl;
return 0;
}
