#include <iostream>

class Base{
public:
    virtual void say_hello() const{
          std::cout<<"Hello - I'm a Base class object"<<std::endl;
     }
     virtual ~Base(){}
};

class Derived : public Base{
public:
     virtual void say_hello() const override {
          std::cout<< "Hello - I'am a Derived class object"<<std::endl;
     }
     virtual ~Derived(){}

};

int main(){

     Base *p1 = new Base();        // Base::say_hello()
     p1 ->say_hello();

     Derived *p2 = new Derived(); // Derived::say_hello()
     p2 ->say_hello();

     Base *p3 = new Derived();  // Base::say_hello ?? i wanted Derived::say_hello()
     p3 ->say_hello();
}