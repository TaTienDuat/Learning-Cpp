#include <iostream>
using namespace std;

void function_2(int &x, int y, int z)
{
     x += y + z;
}

int function_1(int a, int b)
{
     int result{};
     result = a + b;
     function_2(result,a,b);
     return result;
}
int main()
{
     int x{10};
     int y{20};
     int z{};
     z = function_1(x, y);
     cout << z << endl;
     return 0;
}