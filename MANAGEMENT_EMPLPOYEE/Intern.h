#include <iostream>
#include <vector>
using namespace std;

class Intern : public Employee
{

private:
    string major;
    int semeter;
    string universityName;

public:
    Intern() {}
    Intern(int id, string fullname, string birthday, string phone, string email, vector<Certificate *> certificate, string major, int semeter, string university)
        : Employee(id, fullname, birthday, phone, email, certificate)
    {
        this->major = major;
        this->semeter = semeter;
        this->universityName = universityName;
    }
    void inputEmployee();
    void display();
};

void Intern::inputEmployee()
{
    Employee::inputEmployee();
    cout << "Enter major: ";
    getline(cin, major);
    cout << "Enter semeter:";
    cin >> semeter;
    cin.ignore();
    cout << "Enter university name: ";
    getline(cin, universityName);
}

void Intern::display()
{
    cout << "\t\t------NHAN VIEN INTERN------" << endl;
    cout << "\t|ID NHAN VIEN|: " << id << "\t"
         << "\t|TEN NHAN VIEN|: " << fullname << "\t"
         << "\t|NGAY SINH|: " << birthday << endl;
    cout << "\t|SDT|: " << phone << "\t"
         << "\t|EMAIL|:" << email << endl;
    cout << "\t|Nganh hoc|: " << major << "\t"
         << "\t|Ki hoc con lai|: " << semeter << "\t"
         << "\t|Truong|: " << universityName << endl;
    cout << endl;
    cer.display_Certificate();
    cout << endl;
}
