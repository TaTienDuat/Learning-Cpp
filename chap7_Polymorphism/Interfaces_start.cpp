#include <iostream>

class I_Printable
{
     friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);

public:
     virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj)
{
     obj.print(os);
     return os;
}

class Account : public I_Printable
{
     // friend std::ostream &operator<<(std::ostream &os, const Account &acc);
public:
     virtual void withdraw(double amount)
     {
          std::cout << "In Account::withdraw" << std::endl;
     }
     virtual void print(std::ostream &os) const override
     {
          os << "Account display.";
     }
     virtual ~Account() {}
};

/* std::ostream &operator <<(std::ostream &os, const Account &acc){
     os <<"Account display";
     return os;
} */

class Checking : public Account
{
     // friend std::ostream &operator <<(std::ostream &os, const Checking &acc);
public:
     virtual void withdraw(double amount)
     {
          std::cout << "In Checking:: withdraw" << std::endl;
     }
     virtual void print(std::ostream &os) const override
     {
          os << "Checking display.";
     }
     virtual ~Checking() {}
};

class Dog : public I_Printable
{
public:
     virtual void print(std::ostream &os) const override
     {
          os << "Woof woof";
     }
};

void print(const I_Printable &obj){
     std::cout<< obj<<std::endl;
}

/* std:: os tream &operator<<(std::ostream &os, const Checking &acc){
     os <<"Checking display";
     return os;
} */

int main()
{
     Dog *dog = new Dog();
     std::cout << *dog << std::endl;

     print(*dog);

     Account *p1 = new Account();
     std::cout << *p1 << std::endl;

     Account *p2 = new Checking();
     std::cout << *p2 << std::endl;
     // Account a;
     // std::cout<<a<<std::endl;

     // Checking c;
     // std::cout<<c<<std::endl;
}
