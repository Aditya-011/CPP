#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    string firstName;
    string lastName;
    int standard;
    // GETTERS //
    int getAge()
    {
        return age;
    }
    string getFirstName()
    {
        return firstName;
    }
    string getLastName()
    {
        return lastName;
    }
    int getStandard()
    {
        return standard;
    }
};
int main()
{
    student s1;
    cin >> s1.age >> s1.firstName >> s1.lastName >> s1.standard;
    cout << s1.getAge() << endl
         << s1.getLastName() << ", " << s1.getFirstName() << endl
         << s1.getStandard() << endl;
    cout << endl
         << s1.age << " " << s1.firstName << " " << s1.lastName << " " << s1.standard;
}
