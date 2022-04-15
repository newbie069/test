#include "Teacher.h"

int Teacher::getSalary()
{
    return salary;
}
int Teacher::getBonus()
{
    return bonus;
}
int Teacher::getPenalty()
{
    return penalty;
}
int Teacher::getIncome()
{
    return income;
}
void Teacher::setIncome()
{
    this->income = this->salary + this->bonus - this->penalty;
}
void Teacher::setInfo()
{
    People::setInfo();
    cout << "Enter salary: ";
    while(cin >> this->salary && (this->salary < 0))
    {
          cout << "Invalid salary. Type again: ";
    }
    cout << "Enter bonus: ";
    while(cin >> this->bonus && (this->bonus < 0))
    {
          cout << "Invalid bonus. Type again: ";
    }
    cout << "Enter penalty: ";
    while(cin >> this->penalty && (this->penalty < 0))
    {
          cout << "Invalid penalty. Type again: ";
    }
}
void Teacher::getInfo()
{
    People::getInfo();
    cout << "Salary: " << getSalary() << endl << "Bonus: " << getBonus() << endl;
    cout << "Penalty: " << getPenalty() << endl << "Income: " << getIncome() << endl;
}
void Teacher::addTeacher(vector<People*> &list)
{
    list.push_back(new Teacher);
    list[list.size() - 1]->setInfo();
    list[list.size() - 1]->setIncome();
    cout << "----" << endl;
}
void Teacher::printTeacher(vector<People*> list)
{
    for (int i = 0; i < list.size(); i++)
    {
        list[i]->getInfo();
        cout << "----" << endl;
    }
}
void Teacher::deleteTeacher(vector<People*> &list)
{
    int id;
    int found = 0;
    cout << "Enter the id of teacher you want to delete: ";
    cin >> id;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->getId() == id)
        {
            found = 1;
            list.erase(list.begin() + i);
            cout << "Teacher with ID " << id << " have been removed" << endl;
        }
    }
    if (found == 0)
    {
        cout << "This ID does not exist." << endl << "----" << endl;
    }
}
