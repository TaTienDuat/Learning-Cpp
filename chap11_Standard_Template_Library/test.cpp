#include <vector>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <list>

// display any vector of integer using range-based for loop
void display(const std::vector<int> &vec)
{
     std::cout << "[ ";
     for (auto const &i : vec)
     {
          std::cout << i << " ";
     }
     std::cout << "]" << std::endl;
}

void test1()
{
     std::cout << "\n ========================= " << std::endl;
     std::vector<int> nums1{1, 2, 3, 4, 5};
     auto it = nums1.begin(); //  point 1
     std::cout << *it << std::endl;

     it++;
     std::cout << *it << std::endl; // point 2

     it += 2;
     std::cout << *it << std::endl; // point 4

     it -= 2;
     std::cout << *it << std::endl; // point 2

     it = nums1.end() - 1;
     std::cout << *it << std::endl; // point 5
}

void test2()
{
     std::cout << "\n========================== " << std::endl;
     // display all vector elements using an iterator

     std::vector<int> nums1{1, 2, 3, 4, 5};
     std::vector<int>::iterator it = nums1.begin();
     while (it != nums1.end())
     {
          std::cout << *it << std::endl;
          it++;
     }
     // chage all vector element to 0
     it = nums1.begin();
     while (it != nums1.end())
     {
          *it = 0;
          it++;
     }
     display(nums1);
}

void test3()
{

     // using a const_iterator
     std::cout << "\n===========================" << std::endl;
     std::vector<int> nums1{1, 2, 3, 4, 5};
     std::vector<int>::const_iterator it1 = nums1.begin();

     while (it1 != nums1.end())
     {
          std::cout << *it1 << std::endl;
          it1++;
     }
     // compiler error when we try to change element
     it1 = nums1.begin();
     while (it1 != nums1.end())
          ;
     {
          // *it1 = 0; // ! Complile error - read only
          it1++;
     }
}

void test4()
{
     // more iterstors
     // using a reverse iterator
     std::vector<int> vec{1, 2, 3, 4};
     auto it1 = vec.rbegin(); // reverse iterator over vector of ints star at 4
     while (it1 != vec.rend())
     {
          std::cout << *it1 << std::endl;
          it1++;
     }

     // const reverse iterator over a list
     std::list<std::string> name{"larry", "Moe", "Curly"};
     auto it2 = name.crbegin(); // iterator over list of strings point to Curly
     std::cout << *it2 << std::endl;
     it2++; // point to Moe
     std::cout << *it2 << std::endl;

     // iterator over a map
     std::map<std::string, std::string> favorites{
         {"Frank", "C++"},
         {"Bill", "Java"},
         {"James", "Haskell"}};
     auto it3 = favorites.begin(); // iterator over map string,string pairs;
     while (it3 != favorites.end())
     {
          std::cout << it3->first << " : " << it3->second << std::endl;
          it3++;
     }
}
void test5()
{
    std::vector<int> vec {1,2,3,4,5,6,7,8,10}; // 4,5,6,7
    auto start = vec.begin()+3;
    auto finish = vec.end()-2;
    while (start != finish)
    {
     std::cout<<*start<<" ";
     start++;
    }
// for (auto it = start; it != finish ;it++){
//      std::cout<<*it<<" ";
// }
    
    


}
int main()
{
     // test1();
     // test2();
     // test3();
     // test4();
     test5();
     return 0;
}