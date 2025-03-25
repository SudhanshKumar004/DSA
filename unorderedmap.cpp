// unordered map does not support complex datatype,it doesn't have its own hashing function and key will be unique

#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,string>ump;
    ump.insert({101,"anuj"});
    ump.insert({34,"sumit"});
    ump.insert({564,"rahul"});

    for(auto p:ump)
    {
        cout << p.first << ":" << p.second << "\n";
    }

}

//insertion complexity = order of 1
