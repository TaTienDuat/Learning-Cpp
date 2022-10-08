#include <iostream>
#include <string>
#include <vector>

// template classes are tyicall completely contained in header files
// So, we would heve the template class in Item.h and no Item.cpp file
// would be
template <typename T>
class Item
{
private:
     std::string name;
     T value;

public:
     Item(std::string name, T value) : name{name}, value{value}
     {
     }
     std::string get_name() const { return name; }
     T get_value() const { return value; }
};
template <typename T1, typename T2>
struct My_pair
{
     T1 fist;
     T2 second;
};
int main()
{
     Item<int> item1{"DuatTa", 100};
     std::cout << item1.get_name() << " " << item1.get_value() << std::endl;

     Item<std::string> item2{"DuatTa", "C++"};
     std::cout << item2.get_name() << " " << item2.get_value() << std::endl;

     Item<Item<std::string>> item3{"Duat", {"C++", "Java"}};
     std::cout << item3.get_name() << " " 
               << item3.get_value().get_name() << " "
               << item3.get_value().get_value() << std::endl;
     
     std::cout<<"\n============="<<std::endl;
     std:: vector<Item<double>> vec{};
     vec.push_back(Item<double>("Larry",1001));
     vec.push_back(Item<double>("Larry",1001));
     vec.push_back(Item<double>("Larry",1001));
 

     for(const auto &item:vec){
          std::cout<<item.get_name()<<" "<<item.get_value()<<std::endl;
     }
     std::cout<<"\n============="<<std::endl;
     My_pair <std::string , int > p1{"Duat",123};
     My_pair <int,double> p2 {1234,12.3};
     My_pair <int,double> p3 {1234,125.3};

     std::cout<<p1.fist<<" " << p1.second<<std::endl;
     std::cout<<p2.fist<<" " << p2.second<<std::endl;
     std::cout<<p3.fist<<" " << p3.second<<std::endl;


}