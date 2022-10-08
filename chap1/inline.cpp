

#include <iostream>
using namespace std;

inline int max(int a, int b)
{
     return a > b ? a : b;
}
int main()
{
     
     cout << max(8, 4) << endl;
     cout << max(4, 8);
     return 0;
}