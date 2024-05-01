#include <iostream>
#include <vector>
#include "Certificate.h"
#include <string>
#include <istream>
using namespace std;

class Employee
{
protected:
    int id;
    string fullname;
    string birthday;
    string phone;
    string email;
    Certificate cer;
    vector<Certificate *> certificate;

public:
    Employee() {}
    Employee(int id, string fullname, string birthday, string email, string phone, vector<Certificate *> certificate)
    {
        this->id = id;
        this->fullname = fullname;
        this->birthday = birthday;
        this->phone = phone;
        this->email = email;
        this->certificate = certificate;
    }

    void inputEmployee();
    virtual void display() {}
    int getId()
    {
        return id;
    }
    void setId(int id)
    {
        this->id = id;
    }
    void setName(string fullname)
    {
        this->fullname = fullname;
    }
    void setBirthday(string birthday)
    {
        this->birthday = birthday;
    }
    void setEmail(string email)
    {
        this->email = email;
    }
    void setPhone(string phone)
    {
        this->phone = phone;
    }
    vector<Certificate *> getCritificate()
    {
        return certificate;
    }
};

void Employee::inputEmployee()
{
    cout << "------Nhap thong tin nhan vien------" << endl;
    cout << "Enter Employee Id: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Employee name:";
    getline(cin, fullname);
    cout << "Enter Employee Birthday(DD-MM-YYYY): ";
    getline(cin, birthday);
    cout << "Enter Employee Phone:";
    getline(cin, phone);
    cout << "Enter Employee Email: ";
    getline(cin, email);
    cer.intputCertificate();
    certificate.push_back(new Certificate(cer));
    // them  certificate vao vector cuar certifiacate cua
}

void FindById(vector<Employee *> &employee)
{
    int _id;
    cout << "\t\tNhap Id can tim:";
    cin >> _id;
    bool found = false;
    for (int i = 0; i < employee.size(); i++)
    {
        if (employee[i]->getId() == _id)
        {
            found = true;
            cout << "\t\tTim thay nhan vien\n ";
            employee[i]->display();
            break;
        }
        if (!found)
        {
            cout << "\t\tkhong tim thay nhan vien co Id: " << _id << endl;
        }
    }
}
void DeleteEmployee(vector<Employee *> &employee)
{
    int emid;
    cout << "\tNhap Id can xoa:";
    cin >> emid;
    bool kiemtra = false;
    for (auto it = employee.begin(); it != employee.end(); ++it)
    {
        if ((*it)->getId() == emid)
        {
            delete *it;
            employee.erase(it);
            cout << "Employee with ID " << emid << " has been deleted.\n";
            break;
        }
        if (!kiemtra)
        {
            cout << "\tkhong tim thay id " << emid << endl;
        }
    }
    // hoac dung iterator if (!kiemtra)

    // for (int i = 0; i < employee.size(); i++)
    // {
    //     if (employee[i]->getId() == emid)
    //     {
    //         kiemtra = true;
    //         delete employee[i];
    //         cout << "Employee with id" << emid << " has been deleted! " << endl;
    //         employee.size() - 1;
    //         break;
    //     }
    // }
}

void UpdateEmployee(vector<Employee *> &employee)
{
    int _id;
    cout << "\t\tNhap id Employee can thay doi: ";
    cin >> _id;
    bool kiemtra = false;
    for (int i = 0; i < employee.size(); i++)
    {
        if (employee[i]->getId() == _id)
        {
            int id;
            string name, email, phone, birthday;
            cout << "\t\tCap nhat Id: ";
            cin >> id;
            employee[i]->setId(id);
            cin.ignore();
            cout << "\t\tCap nhat ten: ";
            getline(cin, name);
            employee[i]->setName(name);
            cout << "\t\tCcap nhat ngay sinh: ";
            getline(cin, birthday);
            cout << "\t\tCap nhat Email: ";
            employee[i]->setBirthday(birthday);
            getline(cin, email);
            employee[i]->setEmail(email);
            cout << "\t\tCap nhat SDT: ";
            getline(cin, phone);
            employee[i]->setPhone(phone);
            cout << "\t\tCap nhat Certificate: " << endl;
            for (auto cert : employee[i]->getCritificate())
            {
                cert->intputCertificate();
            }
        }
        if (!kiemtra)
        {
            cout << "\tkhong tim thay id " << _id << endl;
        }
    }
}
// bubble sort
void SapXep(vector<Employee *> &employee)
{
    for (int i = 0; i < employee.size() - 1; i++)
    {
        for (int j = 0; j < employee.size() - i - 1; j++)
        {
            if (employee[j]->getId() > employee[j + 1]->getId())
            {
                // Swap employee[j] and employee[j + 1]
                Employee *temp = employee[j];
                employee[j] = employee[j + 1];
                employee[j + 1] = temp;
            }
        }
    }
}