#include <iostream>
#include <vector>

using namespace std;
int main()
{
     vector<string> stooges{"Larry", "Moe", "Curly"};
     vector<string> *vector_ptr(nullptr);

     vector_ptr = &stooges;
     // cout << "First stooges:" << (*vector_ptr).at(0) << endl; // Larry

     cout <<"Stooges is:";
     for (auto stooges:*vector_ptr)
          cout << stooges<< " ";
     cout <<endl;

     return 0;
}