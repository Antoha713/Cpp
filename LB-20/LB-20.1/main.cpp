#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
    string hobby;
};
void print(Person* person)
{
    cout << person->name << " is " << person->age << " years old, " << person->name << " hobby is " << person->hobby << endl;
}

int main()
{
    Person person;
    person.name = "Harry";
    person.age = 23;
    person.hobby = "dance";
    cout << "Meet " << person.name<< "\n";
    print(&person);
    Person person1;
    person1.name = "Jan";
    person1.age = 69;
    person1.hobby = "read books";
    cout << "Meet " << person1.name<< "\n";
    print(&person1);
    Person person2;
    person2.name = "Violet";
    person2.age = 25;
    person2.hobby = "boxing";
    cout << "Meet " << person2.name<< "\n";
    print(&person2);
    return 0;
}