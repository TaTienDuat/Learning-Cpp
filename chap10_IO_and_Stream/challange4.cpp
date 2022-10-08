// * Coppy Romeo and Juliet with line number

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main(){
     std::ifstream in_file("./Romeo_and_Juliet.txt");
     std::ofstream out_file("./Romeo_and_Juliet_out.txt");

     if(!in_file){
          std::cerr <<"Error opening input file"<<std::endl;
          return 1;
     }
     if(!in_file.is_open()){
          std::cerr<<"Error opening input filee"<<std::endl;
          return 1;
     }
     std::string line{};
     int line_number{0};
     while(getline(in_file,line)){
          ++line_number;
          out_file<<std::setw(7) <<std::left<<line_number
          << line <<std::endl;
     }
     std::cout<<"\n Coppy complete"<<std::endl;
     in_file.close();
     out_file.close();
     return 0; 
}