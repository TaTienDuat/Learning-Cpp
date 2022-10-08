
// Miles per Gallon - No Exception handling
#include <iostream>
int main()
{
     int miles{};
     int gallons{};
     double miles_per_gallons{};

     std::cout << "Enter the miles:";
     std::cin >> miles;
     std::cout << "Enter the Gallons:";
     std::cin >> gallons;
     try {
          if(gallons == 0)
               throw 0;
          miles_per_gallons = static_cast<double>(miles) / gallons;
          std::cout << "Result:" << miles_per_gallons << std::endl;  
     }
    catch(int &ex){
     std::cerr<<"You can't divide by zero."<<std::endl;
    } 
     std::cout << "Bye!";
     return 0;
}