#include <iostream>
using namespace std;
int main()
{ /*
     int *int_ptr{nullptr};
     int_ptr = new int; // allocate at interger on the heap

     cout << int_ptr<<endl;
     cout << *int_ptr<<endl; // garbage

     *int_ptr = 200;
     cout<< *int_ptr<<endl;
     delete int_ptr;
     */
    int *array_ptr{nullptr};
    int size{};

    cout<<"How big do you want the array? ";
    cin >> size;

    array_ptr = new int[size]; //allocate array on the heap
     
     
}