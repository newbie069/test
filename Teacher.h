#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <vector>
#include "People.h"

using namespace std;

class Teacher:public People
{
private:
    int salary, bonus, penalty, income;
public:
    int getSalary();
    int getBonus();
    int getPenalty();
    int getIncome();
    void setInfo();
    void getInfo();
    void setIncome();
    void addTeacher(vector<People*>&);
    void printTeacher(vector<People*>);
    void deleteTeacher(vector<People*>&);
};

#endif // TEACHER_H
