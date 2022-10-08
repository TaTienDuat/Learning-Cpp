#include <iostream>
#include <iomanip>

int main()
{
     double num1{123456789.987654321};
     double num2{1234.5678};
     double num3{1234.0};

     // using default setting
     std::cout << "------Default------------" << std::endl;
     std::cout << num1 << std::endl; // 123457e+008
     std::cout << num2 << std::endl; // 1234.57
     std::cout << num3 << std::endl; // 1234

     // Note how since we an't display in precisition 2 scientific notaion is used
     std::cout << std::setprecision(2);
     std::cout << "-------Precsion 2------------" << std::endl;
     std::cout << num1 << std::endl; // 1.2e+008
     std::cout << num2 << std::endl; // 1.2e+003
     std::cout << num3 << std::endl; // 1.2e+003

     std::cout << std::setprecision(9);
     std::cout << "-------Precsion 9------------" << std::endl;
     std::cout << num1 << std::endl; // 1.2346e+008
     std::cout << num2 << std::endl; // 1234.6
     std::cout << num3 << std::endl; // 1234

     // Using precision 3 and fixed
     std::cout << std::setprecision(3) << std::fixed;
     std::cout << "-------Precsion 3 - fixed -------------" << std::endl;

     std::cout << num1 << std::endl; // 123456789.988
     std::cout << num2 << std::endl; // 1234.568
     std::cout << num3 << std::endl; // 1234.000

     // Using precision 3, fixed and scientific notation
     // Note precision is affter the decimal
     std::cout << std::setprecision(3) << std::scientific;
     std::cout << "-- Precision 3 - scientific ---------------" << std::endl;
     std::cout << num1 << std::endl; // 1.235e+008
     std::cout << num2 << std::endl; // 1.235e+003
     std::cout << num3 << std::endl; // 1.234e+003

     // Same but display capital 'E' in scientific
     std::cout << std::setprecision(3) << std::scientific << std::uppercase;
     std::cout << "-- Precision 3 - scientific - uppercase ---------------" << std::endl;
     std::cout << num1 << std::endl; // 1.235E+008
     std::cout << num2 << std::endl; // 1.235E+003
     std::cout << num3 << std::endl; // 1.234E+003

     // SHow '+' symbol for positive number
     std::cout << std::setprecision(3) << std::fixed << std::showpos;
     std::cout << "-- Precision 3 - fixed - showpos ---------------" << std::endl;
     std::cout << num1 << std::endl; // +1.23456789.988
     std::cout << num2 << std::endl; // +1.234.568
     std::cout << num3 << std::endl; // +1234.000


     // back to default
     std::cout.unsetf(std::ios::scientific | std::ios::fixed);
     std::cout<<std::resetiosflags(std::ios::showpos);

     // Show trailling zeros up to precision 10
     std::cout<<std::setprecision(10)<<std::showpoint;
     std::cout<<"--- precision 10 - showpoint ------------------"<<std::endl;
     std::cout << num1 << std::endl;    // 123456790.0
     std::cout << num2 << std::endl;    // 1234.567800
     std::cout << num3 << std::endl;    // 1234.000000

     // Back to default
     std::cout.unsetf(std::ios::scientific| std::ios::fixed | std::ios::uppercase);
     std::cout<<std::setprecision(6);
     std::cout<<std::resetiosflags(std::ios::showpos);
     std::cout<<std::resetiosflags(std::ios::showpoint);

     std::cout<<"-- Back to default ---------"<<std::endl;
     std::cout << num1 << std::endl; // 123457e+008
     std::cout << num2 << std::endl; // 1234.57
     std::cout << num3 << std::endl; // 1234
     return 0;
}