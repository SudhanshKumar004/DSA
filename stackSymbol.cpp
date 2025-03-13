#include<iostream>
using namespace std;
#include<stack>
bool valid(string s)
{
    stack<char>st;
    bool flag = true;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='[' || s[i] == '(' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else if(s[i] == ']')
            {
                if(!st.empty() && st.top() == '[')
                {
                    st.pop();
                }

                else{
                    flag = false;
                    break;
                }

            }
             else if(s[i] == ')')
            {
                if(!st.empty() && st.top() == '(')
                {
                    st.pop();
                }

                else{
                    flag = false;
                    break;
                }

            }
             else if(s[i] == '}')
            {
                if(!st.empty() && st.top() == '{')
                {
                    st.pop();
                }

                else{
                    flag = false;
                    break;
                }

            }
    }

    if(!st.empty())
    {
        return false;
    }
    else{
        return flag;
    }
}

int main()
{
    string s = "{[()]}";
    if(valid(s))
    {
        cout << "Valid";
    }

    else
    {
        cout << "Invalid";
    }
}
