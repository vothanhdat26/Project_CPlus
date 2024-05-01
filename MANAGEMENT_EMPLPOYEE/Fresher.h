
#include "Employee.h"
#include <iostream>
#include <vector>

using namespace std;

class Fresher : public Employee
{
private:
    string gruduationDate;
    string graduationRank;
    string universityName;

public:
    Fresher() {}
    Fresher(int id, string fullname, string birthday, string phone, string mail,
            vector<Certificate *> certificate, string gruduationDate,
            string gruduationRank, string universityName)
        : Employee(id, fullname, birthday, phone, email, certificate)
    {
        this->gruduationDate = gruduationDate;
        this->graduationRank = graduationRank;
        this->universityName = universityName;
    }
    void inputEmployee();
    void display();
};
void Fresher::inputEmployee()
{
    Employee::inputEmployee();
    cout << "Enter Graduation Date:";
    getline(cin, gruduationDate);
    cout << "Enter Graduation Rank: ";
    getline(cin, graduationRank);
    cout << "Enter University name: ";
    getline(cin, universityName);
}
void Fresher::display()
{
    cout << "\t\t--------NHAN VIEN FRESSHER--------" << endl;
    cout << "\t|ID NHAN VIEN|: " << id << "\t "
         << "\t|TEN NHAN VIEN|: " << fullname << "\t"
         << "\t|NGAY SINH|: " << birthday << endl;
    cout << "\t|SDT NHAN VIEN|:" << phone << "\t"
         << "\t|EMAIL|: " << email << endl;
    cout << "\t|Ngay tot nghiep|: " << gruduationDate << "\t"
         << "\t|Tot nghiep loai|: " << graduationRank << "\t"
         << "\t|Truong|: " << universityName << endl;
    cout << endl;
    cer.display_Certificate();
    cout << endl;
}
