//tuple is used to store more than two values;
#include <iostream>
using namespace std;
#include<vector>
#include<tuple>
int main()
{
    tuple<int,string,int>student{101,"Ramesh",80};

    //student = make_tuple(101,"yash",89); // another way;

    cout << "RollNo. " << get<0>(student) << "\n";
    cout << "Name. " << get<1>(student) << "\n";
    cout << "Marks. " << get<2>(student) << "\n";
}
