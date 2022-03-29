#include <bits/stdc++.h>
using namespace std;

void firstFit(int blocksize[], int m,
              int processsize[], int n)
{
    int allocated[n];
    memset(allocated, -1, sizeof(allocated));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (blocksize[j] >= processsize[i])
            {
                allocated[i] = j;
                blocksize[j] -= processsize[i];
                break;
            }
        }
    }
    cout << "\nProcess No.\tProcess Size\tBlock no.\n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << i + 1 << "\t\t"
             << processsize[i] << "\t\t";
        if (allocated[i] != -1)
            cout << allocated[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
}
void bestFit(int blocksize[], int m, int processsize[], int n)
{
    int allocated[n];
    memset(allocated, -1, sizeof(allocated));
    for (int i = 0; i < n; i++)
    {
        int bestIdx = -1;
        for (int j = 0; j < m; j++)
        {
            if (blocksize[j] >= processsize[i])
            {
                if (bestIdx == -1)
                    bestIdx = j;
                else if (blocksize[bestIdx] > blocksize[j])
                    bestIdx = j;
            }
        }
        if (bestIdx != -1)
        {
            allocated[i] = bestIdx;
            blocksize[bestIdx] -= processsize[i];
        }
    }
    cout << "\nProcess No.\tProcess Size\tBlock no.\n";
    for (int i = 0; i < n; i++)
    {
        cout << "   " << i + 1 << "\t\t" << processsize[i] << "\t\t";
        if (allocated[i] != -1)
            cout << allocated[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
}
void worstFit(int blocksize[], int m, int processsize[],
              int n)
{
    int allocated[n];
    memset(allocated, -1, sizeof(allocated));
    for (int i = 0; i < n; i++)
    {
        int wtemp = -1;
        for (int j = 0; j < m; j++)
        {
            if (blocksize[j] >= processsize[i])
            {
                if (wtemp == -1)
                    wtemp = j;
                else if (blocksize[wtemp] < blocksize[j])
                    wtemp = j;
            }
        }
        if (wtemp != -1)
        {
            allocated[i] = wtemp;
            blocksize[wtemp] -= processsize[i];
        }
    }
    cout << "\nProcess No.\tProcess Size\tBlock no.\n";
    for (int i = 0; i < n; i++)
    {
        cout << "   " << i + 1 << "\t\t" << processsize[i] << "\t\t";
        if (allocated[i] != -1)
            cout << allocated[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
}

int main(){
    int blocksize[]={100, 200, 300, 500, 600};
    int processsize[]={345, 222, 380, 128};
    int m=sizeof(blocksize)/sizeof(blocksize[0]);
    int n=sizeof(processsize)/sizeof(processsize[0]);
    firstFit(blocksize, m, processsize, n);
    bestFit(blocksize, m, processsize, n);
    worstFit(blocksize, m, processsize, n);
    return 0;
}
