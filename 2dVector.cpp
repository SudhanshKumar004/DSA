#include <iostream>
using namespace std;
#include<vector>

int main()
{
    vector<vector<int>>vector1;
    int row,col;
    int val;

    cout << "Enter Row Size\n";
    cin >> row;
    cout << "Enter column Size\n";
    cin >> col;

    for(int i = 0; i < row; i++)
    {
        vector<int>vector2;
        for(int j = 0; j < col; j++)
        {
            cout << "enter values\n";
            cin >> val;
            vector2.push_back(val);
        }
        vector1.push_back(vector2);
    }

    cout << "Values in 2d vector\n";

    for(int i = 0; i < vector1.size();i++)
    {
        for(int j = 0; j < vector1[i].size();j++)
        {
            cout << vector1[i][j] << "\t";
        }
        cout << "\n";
    }
}
