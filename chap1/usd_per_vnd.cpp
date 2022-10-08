
#include <iostream>
using namespace std;
int main()
{
    const double usd_per_vnd{2.3};
    cout << "welcome to the USD to VND converter" << endl;
    cout << "enter the value int USD:";

    double dollars{0};
    double vietnamdong{0};

    cin >> dollars;
    vietnamdong = dollars * usd_per_vnd;

    cout << vietnamdong << " vietnamdong equivalent to " << dollars <<  " dollars " << endl;
    cout<< endl;
    return 0;
}