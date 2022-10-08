#include <iostream>
using namespace std;

int main()
{
    int score{};
    cout << "Enter your score on the exam(1-100)";
    cin >> score;

    char letter_grade{};
    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
        {
            letter_grade = 'A';
            /* code */
        }
        else if (score >= 80)
        {
            letter_grade = 'B';
            /* code */
        }
        else if (score >= 70)
        {
            letter_grade = 'C';
            /* code */
        }
        if (score >= 60)
        {
            letter_grade = 'D';
            /* code */
        }
        else
            letter_grade = 'F';
    }

    cout << "Your grade is:" << letter_grade << endl;

    if (letter_grade == 'F')
        cout << "Sorry,you mus repeat the class" << endl;

    else
        cout << "Congrats";
    cout << endl;
    return 0;
}