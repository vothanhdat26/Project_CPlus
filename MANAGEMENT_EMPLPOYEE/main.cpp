#include <iostream>
#include <vector>
#include "filein.h"
#include <algorithm>
using namespace std;

void menu()
{
    char repeat;
    int choice;
    vector<Employee *> employees;
    do
    {
        cout << "-----------QUAN LY NHAN VIEN---------" << endl;
        cout << "\t<1>.Add Intern Employee" << endl;
        cout << "\t<2>.Add Fresher Employee" << endl;
        cout << "\t<3>.Add Experience Employee" << endl;
        cout << "\t<4>.Display all Employee" << endl;
        cout << "\t<5>.Display All Intern" << endl;
        cout << "\t<6>.Display All Fresher" << endl;
        cout << "\t<7>.Display All Experience" << endl;
        cout << "\t<8>.Find Employees" << endl;
        cout << "\t<9>.Update Employee" << endl;
        cout << "\t<10>.Delete Employee" << endl;
        cout << "\t<11>.Count Employee" << endl;
        cout << "\t<12>.Sort Employee Bubble sort and display" << endl;
        cout << "\t<Enter your choice>: ";
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case 1:
        {
            Intern *intern = new Intern();
            intern->inputEmployee();
            employees.push_back(intern);
            break;
        }
        case 2:
        {
            Fresher *fresher = new Fresher();
            fresher->inputEmployee();
            employees.push_back(fresher);
            break;
        }
        case 3:
        {
            Experience *experience = new Experience();
            experience->inputEmployee();
            employees.push_back(experience);
            break;
        }
        case 4:
        {
            for (auto it = employees.begin(); it != employees.end(); ++it)
            {
                (*it)->display();
            }
            break;
        }
        case 5:
        {
            for (auto emp : employees)
            {
                // kiem tra xem xem emp co phai la doi tuong cua *Intern hay khong
                // neu dymanic_cast tra ve con tro hop le khac null thi display
                if (dynamic_cast<Intern *>(emp) != nullptr)
                {
                    emp->display();
                    cout << endl;
                }
            }
            break;
        }
        case 6:
        {
            for (auto emp : employees)
            {
                if (dynamic_cast<Fresher *>(emp) != nullptr)
                {
                    emp->display();
                    cout << endl;
                }
            }
            break;
        }
        case 7:
        {
            for (auto emp : employees)
            {
                if (dynamic_cast<Experience *>(emp) != nullptr)
                {
                    emp->display();
                    cout << endl;
                }
            }
            break;
        }
        case 8:
        {
            FindById(employees);
            break;
        }
        case 9:
        {
            UpdateEmployee(employees);
            break;
        }
        case 10:
        {
            DeleteEmployee(employees);
            break;
        }
        case 11:
        {
            long count = employees.size();
            cout << "\t\tso luong nhan vien: " << count << endl;

            break;
        }
        case 12:
        {
            SapXep(employees);
            for (auto e : employees)
            {
                e->display();
                cout << endl;
            }
            break;
        }
        default:
            break;
        }
        cout << "\tDo you want to countinue? (Y/N): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
}
int main()
{
    menu();

    return 0;
}
