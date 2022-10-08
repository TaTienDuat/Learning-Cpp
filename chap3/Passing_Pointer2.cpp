#include <iostream>
#include <vector>
using namespace std;

void display( const vector<string> *const v)
{
     // (*v).at(0) ="Funny";
     for (auto str : *v)
          cout << str << " ";
     cout << endl;
     // v = nullptr;
}
int main()
{
     // vector <string> stooges{"Larry","Moe", "Curly"};
     // display(&stooges);
} 