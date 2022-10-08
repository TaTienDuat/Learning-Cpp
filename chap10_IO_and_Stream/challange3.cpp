#include <iostream>
#include <fstream>

bool find_substring(const std::string &word_to_find, const std::string &target)
{
     std::size_t found = target.find(word_to_find);
     if (found == std::string::npos)
     {
          return false;
     }
     else
     {
          return true;
     }
}

int main()
{
     int word_count{0};
     int math_count{0};
     std::ifstream in_file{};
     std::string word_to_find{};
     std::string word_read{};

     in_file.open("./Romeo_and_Juliet.txt");
     if (!in_file)
     {
          std::cerr << "Problem opening file" << std::endl;
          return 1;
     }

     std::cout << "Enter the substring sreach for:";
     std::cin >> word_to_find;
     while (in_file >> word_read)
     {
          ++word_count;
          if (find_substring(word_to_find, word_read)){
               ++math_count;
                 std::cout << word_read << " "<<std::endl;
          }
               
        
     }
     std::cout << word_count << " Words were search..." << std::endl;

     std::cout << "The Substring " << word_to_find << " was found " << math_count << " times" << std::endl;
}