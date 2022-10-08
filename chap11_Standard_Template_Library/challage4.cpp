// * Challenge 4
// * Determine if a string is a palindrome
// * Use a deque and stack to solve the prolem

#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <iomanip>
#include <cctype>

bool is_palindrome(const std::string &s)
{
     std::stack<char> stk;
     std::queue<char> q;
     // add all the string characters that are alpha to the back of queue in uppercase
     // push all the string character that are alpha on the stack

     for (char c : s)
     {
          if (std::isalpha(c))
          {
               c = std::toupper(c);
               q.push(c);
               stk.push(c);
          }
     }
     char c1{};
     char c2{};

     //* while the queue is not empty
     //* compare and remove the charactor at top of the stack
     //* and the character at the front of the queue
     //* if they not the same - return false since it can't be a palindrome
     //* if complete the loop the string must a palindrome so return true

     while (!q.empty())
     {
          c1 = q.front();
          q.pop();
          c2 = stk.top();
          stk.top();
          if (c1 != c2)
          {
               return false;
          }
          return true;
     }
}
int main()
{
     std::vector<std::string> test_strings{"a", "C++", "aa", "aba", "Hello", "aaas"};
     std::cout<<std::boolalpha;
     std::cout << std::setw(8) << std::left << "Result"
               << "String" << std::endl;
     for(const auto& s:test_strings){
          std::cout<<std::setw(8)<<std::left<<is_palindrome(s)<<s<<std::endl;
     }       

     return 0;
}