#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
     string s0;
     string s1("Apple");
     string s2("Banana");
     string s3("Kiwi");
     string s4("apple");
     string s5(s1);
     string s6(s1, 0, 3);
     string s7(10, 'x');

     // cout << s0 <<endl;
     // cout <<s0.length()<<endl;

     cout << "\nLooping"
          << "\n......................................." << endl;
     // for (size_t i{0}; i < s1.length(); ++i)
     // {
     //      cout << s1.at(i); // of s1[i] Apple
     //      // cout <<s1[i];
     // }
     //      cout << endl;

     //      for (char c : s1)
     //           cout << c;
     //      cout << endl;

     // Substring
     cout << "\nSubstring"                                 /* substr : có tác dụng cắt chuỗi con ra từ chuỗi string ban đầu bằng
                                                             cách chỉ định vị trí và độ dài chuỗi cần cắt.
     */
          << "\n.........................." << endl;
     s1 = "This is a test";
     cout << s1.substr(0, 4) << endl; // This
     cout << s1.substr(5, 2) << endl; // is
     cout << s1.substr(8,1) <<endl;
     cout <<s1.substr(10,4) <<endl; //test

     // getline
     string full_name{}; 
     cout <<"\ngetline"<< "..................."<< endl;
     cout<< "What is your name:";
     getline (cin ,full_name);
     cout <<"My name is "<< full_name<<endl;
}