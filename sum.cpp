//WAP to sum of two vectors;

#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>v1{3,1,2,5};
    vector<int>v2{7,2,3,4};

    for(int i = 0; i<v1.size();i++)
    {
        cout << v1[i]+v2[i] << "\t";
    }

}

