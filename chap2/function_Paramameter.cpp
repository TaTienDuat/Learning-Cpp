#include <iostream>
#include <iomanip>

using namespace std;

double calc_cout(double base_cost, double tax_rate = 0.06, double shipping = 3.5);

void getting(string name, string prefix = "Mr.", string suffix = "");

double calc_cout(double base_cost, double tax_rate, double shipping)
{
     return base_cost += (tax_rate * base_cost) + shipping;
}
void getting(string name, string prefix, string suffix)
{
     cout << "hello " << prefix + " " + name + " " + suffix << endl;
}

int main()
{
     double cost{0};
     cost = calc_cout(100.0, 0.08, 4.25);

     cout << fixed << setprecision(2);
     cout << "cout is :" << cost << endl;

     getting("Ta Tien Duat", "Dr.","M.D");
     getting("Ta Tien Dut", "Dr.","M.D");
     getting("Ta Tien at", "Dr.","M.C");

     cout <<endl;
}