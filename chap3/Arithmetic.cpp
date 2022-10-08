#include <iostream>

using namespace std;
int main()
{
     //  int scores[] {100,95,89,69,-1};
     //  int *scores_ptr(scores);

     //  while (*scores_ptr != -1)
     //  {
     //       cout <<*scores_ptr<<endl;
     //       scores_ptr ++;
     //  }

     string s1{"Frank"};
     string s2{"Frank"};
     string s3{"James"};

     string *p1(&s1);
     string *p2(&s2);
     string *p3(&s1);

     cout << boolalpha;
     cout << p1 << "==" << p2 << ":" << (p1 == p2) << endl;//false
     cout << p1 << "==" << p3 << ":" << (p1 == p3) << endl; //true

     cout << *p1 << "==" << *p2 << ":" << (*p1 == *p2) << endl; //true
     cout << *p1 << "==" << *p3 << ":" << (*p1 == *p3) << endl; //true

     p3 =&s3; //point James
     cout << *p1 << "==" << *p3 << ":" << (*p1 == *p3) << endl; //false

}