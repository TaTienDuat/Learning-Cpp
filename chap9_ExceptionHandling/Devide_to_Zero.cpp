
// Miles per Gallon - No Exception handling
#include <iostream>
#include <string>

double calculate_mpg(int miles, int gallons)
{
     if (gallons == 0)
          throw 0;
     if (miles < 0 || gallons < 0)
          throw std::string{"Negative value error"};
     return static_cast<double>(miles) / gallons;
}
int main()
{
     int miles{};
     int gallons{};
     double miles_per_gallons{};

     std::cout << "Enter the miles:";
     std::cin >> miles;
     std::cout << "Enter the Gallons:";
     std::cin >> gallons;

     try
     {
          miles_per_gallons = calculate_mpg(miles, gallons);
          std::cout << "Result:" << miles_per_gallons << std::endl;
     }
     catch (int &ex)
     {
          std::cerr << "Tried to devide zero" << std::endl;
     }
     catch(std::string &ex){
          std::cerr<<ex<<std::endl;
     }
     std::cout << "Bye!";
     return 0;
}