// Ss11 Random Number
#include <iostream>
#include <cstdlib> // random
#include <ctime> 
 
using namespace std;
int main(){
     int random_number{};
     size_t count {4};
     int max{6};
     int min{1};

     cout << "RAND_MAX on my system is:"<< RAND_MAX<<endl;
     srand(time(nullptr));

     for (size_t i{1}; i <= count ; i++)     {
          /* code */
          random_number = rand()% max+min; // generate a random number[min,max]
          cout << random_number<<endl;
     }

     cout <<endl;
     return 0;
    
}
