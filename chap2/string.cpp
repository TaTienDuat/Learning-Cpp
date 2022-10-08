#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
     string alphabet{"qwertyuioasdfghjkl"};
     string key{"werpwuriwuirwurwi"};

     string secret_message{};
     cout << "enter the secret message:";
     getline(cin, secret_message);

     string encrypted_message{};
     cout << "\n Encrypting message..." << endl;

     for (char c : secret_message)
     {
          size_t position = alphabet.find(c);
          if (position != string::npos)
          {
               char new_char{key.at(position)};
               encrypted_message += new_char;
          }
          else
          {
               secret_message += c;
          }
     }
     cout << "\n Encypted message is:" << encrypted_message << endl;

     cout << endl;
     return 0;
}
