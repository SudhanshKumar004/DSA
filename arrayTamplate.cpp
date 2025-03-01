#include <iostream>
using namespace std;
#include<array>
#include<algorithm>

int main()
{
    //whenever we create a template and then create an object we have to define the DataType in between;
    // example - array<int,3>obj;

    array<int,10>arr{4,6,2,8,1};

    //sort will sort the values in ascending order;
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++)
    {
        cout << arr.at(i) << "\t";
    }
    //arr.front will print the first value;
    cout << "min = " << arr.front() << "\n";

    //arr.end will print the last value;
    cout << "max = " << arr.back() << "\n";

    //arr.size will print the size of array;
    cout << "Size of array = " << arr.size();
}
