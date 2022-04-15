#include "Teacher.h"

int main()
{
    Teacher teacher;
    vector<People*> list;
    list.resize(0);
    int choice;
    do
    {
        cout << "Choose your option" << endl;
        cout << "1. Add a new teacher" << endl;
        cout << "2. Print list of teacher" << endl;
        cout << "3. Delete a teacher" << endl;
        cout << "4. Quit" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "Invalid choice. Type again: ";
        }
        system("cls");
        switch (choice)
        {
        case 1:
            system("cls");
            teacher.addTeacher(list);
            break;
        case 2:
            system("cls");
            teacher.printTeacher(list);
            break;
        case 3:
            system("cls");
            teacher.deleteTeacher(list);
            break;
        default: break;
        }
     } while (choice != 4);
     return 0;
}
