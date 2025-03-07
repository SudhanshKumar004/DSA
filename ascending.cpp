//print in ascending order by removing the same values;

#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int>v{3,2,3,4,2,1,5,1,8};
    int x = 1;

    for(int i = 1; i<v.size();i++)
    {
        if(v[x-1]!=v[i])
        {
            v[x] = v[i];
            x++;
        }
    }

    for(int k =0; k<x; k++)
    {
        cout << v[k] << "\t";
    }
}
