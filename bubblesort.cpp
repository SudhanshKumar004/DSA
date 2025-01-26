#include <iostream>
using namespace std;

void bubble(int a[],int s)
{
    int temp;
    bool t;
    int cnt = 0;
    for (int i = 0 ; i < s ; i++)
    {
        t=true;
        for (int j = 0 ; j < s-i-1 ; j++)
        {
            cnt++;
            if(a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                t=false;
            }
        }

        if(t==true){
            break;
        }

    }
    for (int i = 0 ; i < s ; i++)
        {
            cout << a[i] << "\t";
        }
        cout << "\nCounter = " << cnt;
}


int main()
{
    int arr[]={1,2,3,5,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    bubble(arr,s);
}
