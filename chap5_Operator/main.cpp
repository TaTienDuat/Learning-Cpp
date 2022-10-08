#include <iostream>
#include "Mystring.h"
using namespace std;

int main(){
     
               // phan biet Gan va khoi tao
     Mystring a {"Hello"};    //overloaded constructor
     Mystring b;              // no-args constructor
     b = a;                 // coppy assignment
                              // b.operator =(a)     
     b = "This is a test";     // b.operator = (this is a test) ./'
     
     
     /*
     Mystring empty;               // no-args constructor
     Mystring larry("Larry");      // overloaded constructor
     Mystring stooge{larry};       // coppy constructor 

     empty.display();
     larry.display();
     stooge.display();
      */

     return 0;

}
