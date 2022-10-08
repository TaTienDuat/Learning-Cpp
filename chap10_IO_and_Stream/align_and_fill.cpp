
// Stream manipulators - Field width with, juatification and setfill
// setw. left, right, setfill
#include <iostream>
#include <iomanip>

void ruler()
{
     std::cout << "\n12345678901234567890123456789012345678901234567890" << std::endl;
}

int main()
{
     int num1{1234};
     double num2{1234.5678};
     std::string hello("Hello");

     // Defaults
     std::cout << "\n--- Defaults ------------------------" << std::endl;
     ruler();
     std::cout << num1
               << num2
               << hello
               << std::endl;

     // Defaults - one per line
     std::cout << "\n--- Defaults -one per line ------------------------" << std::endl;
     ruler();
     std::cout << num1 << std::endl;
     std::cout << num2 << std::endl;
     std::cout << hello << std::endl;

     // Set field width to 10
     // Note the default justificatio is right for num 1 only!
     std::cout << "\n--- Width 10 for num1 ------------------------" << std::endl;
     ruler();
     std::cout << std::setw(10) << num1
               << num2
               << hello
               << std::endl;
     //
     //
     std::cout << "\n--- Width 10 for num1 and num2 ------------------------" << std::endl;
     ruler();
     std::cout << std::setw(10) << num1
               << std::setw(10) << num2
               << hello
               << std::endl;

     // Setfill to a dash
     // This is persistent
     // Then repeat the previouss display

     std::cout << std::setfill('-');
     std::cout << "\n-- width 10 for num1 and num2 and hello left for all setfill to dash-----" << std::endl;
     ruler();
     std::cout << std::setw(10) << std::left << num1
               << std::setw(10) << std::left << num2
               << std::setw(10) << std::left << hello
               << std::endl;

     // Set width to 10 for all, left justify all and cary the setfill charactor
     std::cout << "\n-- width 10 for num1 and num2 and hello - setfill varies -------" << std::endl;
     ruler();
     std::cout << std::setw(10) << std::left << std::setfill('*') << num1
               << std::setw(10) << std::left << std::setfill('#') << num2
               << std::setw(10) << std::left << std::setfill('-') << hello
               << std::endl;
     return 0;
}