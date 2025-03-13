#include<iostream>
using namespace std;
#include<forward_list>
int main()
{
    forward_list<int>f;
    f.push_front(4);
    f.push_front(5);
    f.push_front(1);
    f.push_front(4);
    f.push_front(44);
    f.push_front(64);
    f.push_front(84);
    f.sort();
    f.unique();
    for(auto p:f)
    {
        cout << p << "\t";
    }
    f.pop_front();
    cout << "\nAfter Delete\n";

    for(auto p:f)
    {
        cout << p << "\t";
    }

    cout << "\nLength = " << distance(f.begin(),f.end());
    cout << "\n";
    f.reverse();
    cout << "After reverse\n";
    for(auto p:f)
    {
        cout <<  p << "\t";
    }
    cout << "\nMerge\n";
    forward_list<int>f1{54,67,43,22,66,98};
    forward_list<int>f2{34,87,9,6,1,43,3,6};

    cout << "\nf1 data\n";

    for(auto p:f1)
    {
        cout << p << "\t";
    }
    f1.sort();
    f2.sort();

    for(auto p:f2)
    {
        cout << p << "\t";
    }

    f1.merge(f2);
    cout << "\nAfter merge\n";

    for(auto p:f1)
    {
        cout << p << "\t";
    }

}
