
#include <iostream>
#include <vector>
using namespace std;
int main()
{
     int data_iteam{};

     cout << "how many data iteam:";
     cin >> data_iteam;

     vector<int> data{};

     for (int i{1}; i <= data_iteam; ++i)
     {
          int data_iteam;
          cout << "Enter data iteam:";
          cin >> data_iteam;
          data.push_back(data_iteam);
     }
     cout << "\n Displayinh histogram:" << endl;
     for (auto val : data)
     {
          for (int i{1}; i <= val; ++i)
               if (i % 5 == 0)
               {
                    cout << "*";
               }
               else
               {
                    cout <<"-";
               }
          cout << endl;
     }
     cout << endl;
     return 0;
}