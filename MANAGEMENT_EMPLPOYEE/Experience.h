#include <iostream>
#include <vector>

using namespace std;

class Experience : public Employee
{
private:
    int yearOfEx;
    string proSkill;

public:
    Experience() {}
    Experience(int id, string fullname, string birthday, string phone, string email,
               vector<Certificate *> certificate, int yearOfEx, string proSkill)
        : Employee(id, fullname, birthday, phone, email, certificate)
    {
        this->yearOfEx = yearOfEx;
        this->proSkill = proSkill;
    }
    void inputEmployee();
    void display();
};

void Experience::inputEmployee()
{
    Employee ::inputEmployee();
    cout << "Enter Year of Experience: ";
    cin >> yearOfEx;
    cin.ignore();
    cout << "Enter pro skill: ";
    getline(cin, proSkill);
}
void Experience::display()
{
    cout << "\t\t--------NHAN VIEN EXPERIENCE--------" << endl;
    cout << "\t|ID NHAN VIEN|: " << id << "\t "
         << "\t|TEN NHAN VIEN|: " << fullname << "\t"
         << "\t|NGAY SINH|: " << birthday << endl;
    cout << "\t|SDT NHAN VIEN|:" << phone << "\t"
         << "\t|EMAIL|: " << email << endl;
    cout << "\t|Year Of Experience|: " << yearOfEx << "\t "
         << "\t|Skill|:  " << proSkill << endl;
    cout << endl;
    cer.display_Certificate();
    cout << endl;
}