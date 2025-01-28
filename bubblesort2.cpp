#include <iostream>
using namespace std;

void bubblesrt(int arr[],int s)
{
    int tmp;
    bool t;
    int cnt = 0;
    for(int i = 0;i < s; i++)
    {
        t=true;
        for(int j = 0;j<s-i-1;j++)
        {
            cnt++;
            if(arr[j]>arr[j+1])
            {
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
        if(t==true)
        {
            break;
        }
    }for(int  i =0;i<s;i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "cnt = " << cnt;
}
int main()
{
    int arr[] = {1,2,3,5,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    bubblesrt(arr,s);
}

//time complexity = order of n;
//value based;
//subtract and conquer;
//stability = no;
//space complexity = order of 1;
// in place = yes;

