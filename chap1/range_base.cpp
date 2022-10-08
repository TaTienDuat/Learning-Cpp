// session 9 : Range base for loop

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
     //      int score[]{10, 40, 50};
     //      for (auto score : score)
     //           cout << score << endl;

     // vector<double> temperatures{18, 5, 22.3, 33.3};
     // double avarage_temp{};
     // double total{};
     // for (auto temp : temperatures)
     //      total += temp;

     // if (temperatures.size() != 0)
     //      avarage_temp = total / temperatures.size();

     // cout << fixed << setprecision(1);
     // cout << "average temperatures is:" << avarage_temp << endl;

     // for (auto val: {19, 5, 5, 7})
     //      cout << val << endl;

     // int number{};
     // cout << "Enter an integer less than 100:";
     // cin >> number;

     // while (number >= 100)
     // {
     //      cout << "enter an integer less than 100:";
     //      cin >> number;
     // }
     // cout << "thanks" << endl;

// while loop;
     bool done{false};
     int number{0};

     while (!done)
     {
          cout << " Enter the between 1 and 5:";
          cin >> number;
          if (number <= 1 || number >= 5)
          {
               cout << "Out of range, try again" << endl;
          }
          else
          {
               cout << "thanks";
               done = true;
          }
         
     }

     cout << endl;
     return 0;
}