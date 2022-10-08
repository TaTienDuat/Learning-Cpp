#include <iostream>
#include <iomanip>

int main()
{
     int num{255};

     // Displaying using different bases
     std::cout << std::dec << num << std::endl; // 255
     std::cout << std::hex << num << std::endl; // ff
     std::cout << std::oct << num << std::endl; // 377

     // Displaying showing the base prefix for hex and oct
     std::cout << "\n-------------------------------------" << std::endl;
     std::cout << std::showbase;
     std::cout << std::dec << num << std::endl; //255
     std::cout << std::hex << num << std::endl; //0xff
     std::cout << std::oct << num << std::endl; // 0377

     // Display the hex value in uppercase
     std::cout << "\n________________________________" << std::endl;
     std::cout << std::showbase << std::uppercase;
     std::cout << std::hex << num << std::endl; //0XFF

     // Display the +sign in front of positive base 10 numbers
     std::cout<<"\n_______________________________"<<std::endl;
     std::cout<<std::showpos;
     std::cout<<std::dec<<num<<std::endl; // +255
     std::cout<<std::hex<<num<<std::endl; // OXFF
     std::cout<<std::oct<<num<<std::endl; //0377

     // Setting using the set method
     std::cout.setf(std::ios::showbase);
     std::cout.setf(std::ios::uppercase);
     std::cout.setf(std::ios::showpos);
     // Resetting to defaults
     std::cout<<std::resetiosflags(std::ios::basefield);
     std::cout<<std::resetiosflags(std::ios::showbase);
     std::cout<<std::resetiosflags(std::ios::showpos);


     return 0;
}