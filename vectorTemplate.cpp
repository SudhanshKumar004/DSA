#include<iostream>
using namespace std;

#include<vector>
int main()
{
    vector<int>v{3,4,5,3};
    v[1]=30; // editing the existing data;

    vector<string>v1{"sun", "mon", "tue"};

    for(auto p:v1)
    {
        cout << p << "\t";
    }

    vector<int>v3(5); //default value = 0;
    cout << "\n";

    for(auto k:v3)
    {
        cout << k << "\t";
    }
    cout << "\n";

    vector<int>v4(5,10); //default value = 10;

    v4[3]=2000;

    for(auto k:v4)
    {
        cout << k << "\t";
    }


    //user input for vector -

    vector<int>vec;
    int sz,val;
    cout << "Enter the size of vector\n";
    cin >> sz;

    for(int i=1;i<sz;i++)
    {
        cout << "Enter Value\n";
        cin >>val;
        vec.push_back(val);
    }
    cout << "\nData in Vector\n";
    for(auto p:vec)
    {
        cout << p << "\t";    }
cout << "\n After Delete\n";
vec.pop_back();
for(auto p:vec)
{
    cout << p << "\t";
}

vector<int>:: iterator it=vec.begin();

vec.insert(it+1,780);
cout << "\n After insert at 0 location\n";
for(auto p:vec)
{
    cout << p << "\t";
}
}
