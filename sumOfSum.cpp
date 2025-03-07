//WAP to sum of two vectors total values;

#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>v1{3,1,2,5};
    vector<int>v2{7,2,3,4};

    int sum1 = 0;
    int sum2 = 0;
    int total;

    for(int i = 0; i<v1.size();i++)
    {
         sum1 = sum1+v1[i];
         sum2 = sum2+v2[i];
    }
    total = sum1+sum2;

    cout << "Sum Of Total " << total;

}
