#include <iostream>
using namespace std;
void selectionsrt(int arr[],int s)
{
    int chotu;
    for(int i = 0;i < s;i++)
    {
        chotu  = i;
        for(int j=i+1;j<s;j++)
        {
            if(arr[chotu]>arr[j])
            {
                chotu = j;
            }
        }
        if(chotu!=i)
        {
            int tmp;
            tmp=arr[i];
            arr[i]=arr[chotu];
            arr[chotu]=tmp;
        }
    }
}

int main(){
    int arr[] = {9,2,1,6,7};
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout << arr[i] << "\t";
    }
    selectionsrt(arr,s);
    cout << "\nAfter selection sort\n";
    for(int i=0;i<s;i++)
    {
        cout << arr[i] << "\t";
    }

}

//time complexity = order of n2
//structure based;
//substract and conquer;
//stability = no;
//space complexity = order of 1;
// inplace = yes;
