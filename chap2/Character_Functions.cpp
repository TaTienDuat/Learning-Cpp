#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char fist_name[20]{};
    char last_name[20]{};
    char full_name[20]{};
    char temp[50]{};

    //     cout << fist_name;

    cout << "Please enter your fist name:";
    cin >> fist_name;
    cout << "Please enter your last name:";
    cin >> last_name;
    cout << "------------------" << endl;
                // strlen:header file cstring, giúp chúng ta tính độ dài chuỗi trong đối số.
    cout << "hello," << fist_name << " your fist name has " << strlen(fist_name) << " charater" << endl; 
    cout << "and your last name," << last_name << " has " << strlen(last_name) << " charater" << endl;
}