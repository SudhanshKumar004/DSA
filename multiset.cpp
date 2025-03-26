#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int>s{5,3,8,6,1,9,9} ;

    for(auto p:s)
    {
        cout << p << "\t";
    }
    cout << "\n";
    s.insert(11);

    for(auto p:s)
    {
        cout << p << "\t";
    }

    auto y=s.find(11);

    if(y!=s.end())
    {
        cout << *y << "\n";
    }

    else
    {
        cout << "Not Found\n";
    }
}


