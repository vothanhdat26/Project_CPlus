#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNum;
    double balance; // so tien
public:
    BankAccount(string name, int accountNum, double balance)
    {
        this->name = name;
        this->accountNum = accountNum;
        this->balance = balance;
    }
    void input()
    {
        cout << "\t\tEnter name: ";
        cin >> name;
        cout << "\t\tEnter Account number: ";
        cin >> accountNum;
        cout << "\t\tEnter Initial Balance: ";
        cin >> balance;
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    int getAccountNum()
    {
        return accountNum;
    }
    void setAccountNum(int accountNum)
    {
        this->accountNum = accountNum;
    }
    double getBalance()
    {
        return balance;
    }
    void setBalance(double balance)
    {
        this->balance = balance;
    }
  
};
class BankManagement
{
private:
    vector<BankAccount> accounts;
public:
    void addAccount(string name, int accountNum, double balance){
        accounts.push_back(BankAccount(name,accountNum,balance));
    }
    void showAllAccount(){
        cout <<  "\t\t All Account Holders " << endl; // tat ca tai khoan
        for(int i=0;i< accounts.size();i++){
            cout <<"Name: " << accounts[i].getName() << endl;
            cout <<"Account Number: " << accounts[i].getAccountNum() << endl;
            cout <<"Balance: " << accounts[i].getBalance()<< endl;
        }
    }

};
void main_cpp()
{
    BankAccount **bankA;
    BankManagement *bankM ;
    int op;
    char choice;
    do
    {
        system("cls");
        cout << "\t\t BANK MANAGEMENT SYSTEM " << endl;
        cout << "\t\t Main Menu" << endl;
        cout << "\t\t1.Create New Account" << endl;
        cout << "\t\t2.Show all Account " << endl;
        cout << "\t\t3.Search Account " << endl;
        cout << "\t\t4.Deposit Money" << endl;
        cout << "\t\t5.Withdraw money" << endl;
        cout << "\t\t6.Exit " << endl;
        cout << "\t\t----------------------------------------" << endl;
        cout << "\t\tEnter Your choice: ";
        cin >> op;
        switch (op)
        {
        case 1:
        bankA->input();
        break;

        default:
        	cout << "\t\tInvalid Number......!" << endl;
			
            break;
        }
    cout << "Do you want continue [YES/NO] ? :";
    cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}