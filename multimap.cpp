//MultiMap = it allows duplicate key;
#include<iostream>
#include<map>
using namespace std;
int main()
{
 multimap<int,string>multi;
 multi.insert ({22,"ravi"});
 multi.insert ({23,"vijay"});
 multi.insert ({21,"dev"});
 multi.insert ({26,"raj"});
 multi.insert ({22,"rahul"});

 for(auto p:multi)
 {
     cout << p.first << ":" << p.second << "\n";
 }

 multi.erase(22);

 cout << "\n\n";

 for(auto p:multi)
 {
     cout << p.first << ":" << p.second << "\n";
 }
}
