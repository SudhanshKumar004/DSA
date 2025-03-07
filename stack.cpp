#include<iostream>
using namespace std;
#include<vector>
#include<stack>
int main()
{
    stack<int>st;

    st.push(4);
    st.push(40);
    st.push(5);
    st.push(7);
    cout << "Before = " << st.empty() << "\n";

    while(!st.empty())
    {
        cout << st.top() << "\n";
        st.pop();
    }

    cout << "\nAfter Removing = " << st.empty();
}
