#include <iostream>

using namespace std;

class Base
{
     // Note fiends of Base have acess to all
public:
     int a{0};
     void display() { cout << a << "," << b << "," << c << endl; } // member method has acess to all
protected:
     int b{0};

private:
     int c{0};
};

class Derived : public Base
{
     // Note fiends of Derived have access to only what  Derived have access to

     // a will be public
     // b will be protected
     // c will not be accessible
public:
     void access_base_member(){
          a = 100; // ok
          b = 200; // ok
     }
};
int main()
{

     cout << "===Base member access from base oject===========" << endl;
     Base base;
     base.a = 100;
     // base.b = 200; // Compiler error
     // base.c = 300; // Compiler error

      cout << "====Base member access from derived objects==========" << endl;

     Derived d;
     d.a =100; // ok
     // d.b =200; // error
     // d.c =300; // error
     
     return 0;
}
 