// Arithmetic operator

// #include <iostream>
// using namespace std;
// int main()
// {
//     {
//         int num1{200};
//         int num2{100};

//         //  cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

//         int result{0};
//         result = num1 + num2;
//         cout << num1 << " + " << num2 << " = " << result << endl;
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int total{};
    int num1{}, num2{}, num3{};
    const int count{3};

    cout << "Enter 3 intergers separated by spaces:";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average{0.0};
    average = total / count;

    cout << "the 3 number were:" << num1 << " , " << num2 << "," << num3 << endl;
    cout << "the sum of the member is:" << total << endl;
    cout << "The average of the number is:" << average << endl;
    cout << endl;
    return 0;

}