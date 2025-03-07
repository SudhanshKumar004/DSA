/*pair is used to store two different types of values,
  the first value is access by "first" keyword and
  the second value  is access by "second" keyword;
  we can insert data in a pair by using make_pair function */

  #include <iostream>
  using namespace std;
  #include <vector>
  int main()
  {
      pair<int,string>p1{12,"red"};

     // p1= make_pair(12,"red"); // another way to  make pair

      cout << "first " << p1.first << "\n";
      cout << "second " << p1.second << "\n";
  }
