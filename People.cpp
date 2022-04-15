#include "People.h"


string People::getName()
{
    return name;
}
string People::getHometown()
{
    return hometown;
}
int People::getAge()
{
    return age;
}
int People::getId()
{
    return id;
}
void People::setInfo()
{
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, this->name);
    cout << "Enter age: ";
    while(cin >> this->age && (this->age < 0))
    {
          cout << "Invalid age. Type again: ";
    }
    cout << "Enter hometown: ";
    cin.ignore();
    getline(cin, this->hometown);
    cout << "Enter id: ";
    while(cin >> this->id && (this->id < 0))
    {
          cout << "Invalid ID. Type again: ";
    }
}
void People::getInfo()
{
    cout << "Name: " << getName() << endl << "Age: " << getAge() << endl;
    cout << "Hometown: " << getHometown() << endl << "ID: " << getId() << endl;
}
