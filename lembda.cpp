#include <iostream>>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    vector<int>v{2,1,5,4,6};
    sort(v.begin(), v.end());
    for(auto p:v)
    {
        cout << p << "\t";
    }
    cout << "\n";
    sort(v.begin(),v.end(), less<int>());
    sort(v.begin(),v.end(), greater<int>());

    sort(v.begin(),v.end(),[](int a, int b) {return a>b;});
    for(auto p:v)
    {
        cout << p << "\t";
    }
}


//all_of(); none_of(); any_of();  returns bool  v alue
