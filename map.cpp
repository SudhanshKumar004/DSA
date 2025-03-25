#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>mp{{101,"amit"},{100,"sumit"},{102,"ajay"}};
    for(auto p:mp)
    {
        cout << p.first << ":" << p.second << "\n";
    }

    map<string,int>student{{"anshul",25},{"akash",20},{"sudhansh",24},{"anuj",22}};

    for(auto i=student.begin();i!=student.end();i++)
    {
        cout << i->first << ":"<< i->second<< "\n";
    }

    //ohter ways to insert in map =

    map<int,int>mp1;

    mp1.insert({1,23});
    mp1.insert({4,34});
    mp1.insert({7,56});
    mp1[10]=23;
    mp1[33]--;
    mp1[4]++;

    for(auto p:mp1)
    {
        cout << p.first << ":" << p.second << "\n";
    }
}
