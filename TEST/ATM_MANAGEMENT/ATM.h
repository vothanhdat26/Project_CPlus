#include <iostream>
using namespace std;
//1 xem so du
//2 rut tien
//3
class ATM
{
private:
    string ac_name;
    int ac_Numer;
    double balance; // tiền còn lại
public:
    ATM(double balance){
        this->ac_name= ac_name;
        this->ac_Numer = ac_Numer;
        this->balance = balance;
    }
    void setName(string ac_name)
    {
        this->ac_name = ac_name;
    }
    string getName(){
        return ac_name;
    }
    void setAc_number(int ac_Number){
        this->ac_Numer = ac_Number;
    }
    int getAc_number(){
        return ac_Numer;
    }
    double getBalance(){
        return balance;
    }
    double withdraw(double amount){
        if(amount > balance){
            return false;
        }
        balance -=amount;
        // balance = balance - amount;
        return true;
    }
    void depost(double amount){
        // balance = balance + amount;
        balance +=amount;
    }
    void display(){
        cout <<"Account Name: "<< ac_name << endl;
        cout <<"Account Number: " << ac_Numer << endl;
        cout <<"Account Balance: " << balance << endl;
    }
};