#include <iostream>
using namespace std;


//creating a nameSpace;
namespace cybrom
{
    int a = 90;
    int b = 100;

    //creating a function inside nameSpace;
    void show()
    {
        cout << "result=" << a+b ;

    }

    //creating a class in nameSpace
    class bhopal
    {
        public:int sqr(int a)
        {
            return a*a;
        }
    };

    //creating another class with obj;
    class iostreamx
    {
        public:void fun()
        {
            cout << "fun\n";
        }
    }coutx;
}

using namespace cybrom;
int main()
{
    cout << a << "\n";
    cout << b <<"\n";
    show();
    bhopal b;
    b.sqr(8);
    coutx.fun();
}
