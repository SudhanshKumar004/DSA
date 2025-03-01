#include<iostream>
using namespace std;
#include<array>
#include<algorithm>
int main()
{
    array<int,5>arr;

    cout << "enter 5 values\n";
    for(int i = 0; i<arr.size();i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i = 0; i<arr.size();i++)
    {
        cout << arr.at(i) << "\t";
    }

    int maxValue = arr[arr.size()-1];
    int secondMax;

    for(int i =arr.size()-2;i>=0;i--)
    {
        if(arr[i]<maxValue)
        {
            secondMax = arr[i];
            break;
        }
    }


    cout << "Second Max Value = " << secondMax;

}
