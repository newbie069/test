#ifndef PEOPLE_H
#define PEOPLE_H
#include <iostream>

using namespace std;

class People
{
private:
    string name, hometown;
    int age, id;
public:
    string getName();
    string getHometown();
    int getAge();
    int getId();
    virtual void setIncome() = 0;
    virtual int getIncome() = 0;
    virtual void setInfo();
    virtual void getInfo();
};

#endif // PEOPLE_H
