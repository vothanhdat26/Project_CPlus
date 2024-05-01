#include <iostream>
#include <vector>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNum;
    double balance; // so tien
public:
    BankAccount(){};
    BankAccount(string name, int accountNum, double balance)
    {
        this->name = name;
        this->accountNum = accountNum;
        this->balance = balance;
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
    // nap tien
    void deposit(double amount)
    {
        balance = balance + amount;
    }
    // rut tien
    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance = balance - amount;
            cout << "\t\tWithdraw Successfull.....!" << endl;
        }
        else
        {
            // khong du so du
            cout << "\t\tInsufficent balance......." << endl;
        }
    }
    // void input()
    //
    // cout << "\t\tEnter name: ";
    // cin >> name;
    // cout << "\t\tEnter Account number: ";
    // cin >> accountNum;
    // cout << "\t\tEnter Initial Balance: ";
    // cin >> balance;
    // // }
    // void display(){

    //     cout <<"Account name: " << name << endl;
    //     cout <<  "Account Number: " << accountNum << endl;
    //     cout << "Balance: " <<balance << endl;
    // }
};
class BankManagement
{
private:
    vector<BankAccount> accounts;

public:
    void addAccount(string name, int accountNum, double balance)
    {

        accounts.push_back(BankAccount(name, accountNum, balance));
    }
    void showAllAccount()
    {
        cout << "\t\t All Account Holders " << endl; // tat ca tai khoan
        for (int i = 0; i < accounts.size(); i++)
        {
            cout << "Name: " << accounts[i].getName() << endl;
            cout << "Account Number: " << accounts[i].getAccountNum() << endl;
            cout << "Balance: " << accounts[i].getBalance() << endl;
        }
    }
    void searchAccount(int account)
    {
        cout << "\t\t Account Holder " << endl;
        for (int i = 0; i < accounts.size(); i++)
        {
            if (accounts[i].getAccountNum() == account)
            {
                cout << "Name: " << accounts[i].getName() << endl;
                cout << "Account number: " << accounts[i].getAccountNum() << endl;
                cout << "Account balance: " << accounts[i].getBalance() << endl;
            }
        }
    }
    BankAccount *findAccount(int accountNum)
    {
        for (int i = 0; i < accounts.size(); i++)
        {
            if (accounts[i].getAccountNum() == accountNum)
            {
                return &accounts[i];
            }
        }
    }
};
void main_cpp()
{
    vector<BankAccount> accounts;
    BankManagement bankM;
    int op;
    char choice;
    do
    {
        system("cls");
        cout << "---------------------------------------------------------------" << endl;
        cout << "\t\t BANK MANAGEMENT SYSTEM " << endl;
        cout << "---------------------------------------------------------------" << endl;
        cout << "\t\t\tMain Menu" << endl;
        cout << "\t\t1.Create New Account" << endl;
        cout << "\t\t2.Show all Account " << endl;
        cout << "\t\t3.Search Account " << endl;
        cout << "\t\t4.Deposit Money" << endl;
        cout << "\t\t5.Withdraw money" << endl;
        cout << "\t\t6.Exit " << endl;
        cout << "****************************************************************" << endl;
        cout << "\t\tEnter Your choice: ";
        cin >> op;
        switch (op)
        {
        case 1:
        {
            string name;
            int accountNum;
            double balance;
            cout << "\t\tEnter name: ";
            cin >> name;
            cout << "\t\tEnter Account number: ";
            cin >> accountNum;
            cout << "\t\tEnter Initial Balance: ";
            cin >> balance;
            bankM.addAccount(name, accountNum, balance);
            cout << "\t\t Created Successfull....!";
            break;
        }
        case 2:
        {
            bankM.showAllAccount();
            break;
        }
        case 3:
        {
            int accountNum;
            cout << "Enter Account Number: ";
            cin >> accountNum;
            bankM.searchAccount(accountNum);
            break;
        }
        case 4:
        {
            int accountNum;
            double amount;
            cout << "\t\tEnter Acount number to deposit money: ";
            cin >> accountNum;
            BankAccount *account = bankM.findAccount(accountNum);
            if (account != nullptr)
            {
                cout << "\t\tEnter amount to deposit: ";
                cin >> amount;
                account->deposit(amount);
                cout <<"\t\t" << amount << "Deposit Successfull..." << endl;
            }
            else{
                cout <<"\t\tAcount Not found.... "<< endl;
            }
            break;
        }
        case 5:{
             int accountNum;
            double amount;
            cout << "\t\tEnter Acount number to deposit money: ";
            cin >> accountNum;
            BankAccount *account = bankM.findAccount(accountNum);
            if (account != nullptr)
            {
                cout << "\t\tEnter amount to deposit: ";
                cin >> amount;
                account->withdraw(amount);
                cout <<"\t\t" << amount << "Deposit Successfull..." << endl;
            }
            else{
                cout <<"\t\tAcount Not found.... "<< endl;
            }
            break;
        }
        case 6:
        exit(1);
        default:
            cout << "\t\tInvalid Number......!" << endl;
            break;
        }
        cout << "Do you want continue [YES/NO] ? :";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}