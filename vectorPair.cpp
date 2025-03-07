#include<iostream>>
using namespace std;
#include<vector>
int main()
{
    vector<pair<int,string>>vec;
    int roll,number;
    string name;

    cout << "Enter Total number of enteries" << "\n";
    cin >> number;

    // For Data Storing;
    for(int i =1; i<=number;i++)
    {

    cout << "Enter Roll No.\n";
    cin >> roll;

    cout << "Enter Name\n";
    cin >> name;

    vec.push_back(make_pair(roll,name));
    // vec.push_back({roll,name}); // another way
    }

    cout << "Results are = \n";

    for(int i=0;i<vec.size();i++)
    {
        cout << vec[i].first << " : " << vec[i].second << "\n";
    }
}
