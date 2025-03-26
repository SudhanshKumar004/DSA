//WAP to find out the given string is panagram or not;
#include<iostream>
using namespace std;
int main()
{
    string s = "The quick brown fox jumps over the lazy dog\n";

    if(panagram(s))
    {
        cout << "It is panagram\n";
    }

    else
    {
        cout << "Not a panagram\n";
    }
}
