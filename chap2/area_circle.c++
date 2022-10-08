#include <iostream>
using namespace std;

const double pi{3.14159};

double calc_area_circle(double radius)
{
     return pi * radius * radius;
}
double calc_volume_cylinder(double height, double radius)
{
     // return pi * radius * radius * height; 
     return calc_area_circle(radius)*height;
}

double area_circle()
{
     double radius{};
     cout << "\nEnter the radius circle:";
     cin >> radius;
     cout << "the area of a circle " << radius << " is: " << calc_area_circle(radius) << endl;
}
void volume_cylinder()
{
     double radius{};
     double height{};
     cout << "\nEnter the radius of cylinder:";
     cin >> radius;
     cout << "\nEnter the height of cylinder:";
     cin >> height;

     cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height);
}

int main()
{
     area_circle();
     volume_cylinder();
     return 0;
}