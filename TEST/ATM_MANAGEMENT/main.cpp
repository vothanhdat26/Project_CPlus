#include"ATM.H"
int main()
{
    ATM atm(1000);
    char choice;
    int op;
    double amount,success;
    do{
		system("cls");

		cout << "----------------------------------------------------------------------------" << endl;
		cout << "\t\t\t ATM Management System" << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "\t\t\t1.View Blance: " << endl;
		cout << "\t\t\t2.Cash Withdraw: " << endl;
		cout << "\t\t\t3.Cash Depost: " << endl;
		cout << "\t\t\t4.Exit " << endl;
		cout << "\t\t\t5.Delete Student " << endl;
		cout << "\t\t\tEnter Your Choice: ";
		cin >> op;
        switch (op)
        {
        case 1:
        // so du cua ban
            cout <<"Your Balance: " << atm.getBalance();
            break;
        case 2: 
        // nhap so tien can rut
            cout <<"Enter the Amount to Withdraw " ;
            cin >>amount;
            success = atm.withdraw(amount);
            if(success){
                // rut tien thanh cong
                cout << "withdraw Successf ully.....!" << endl;
            }   
            else{
                // so du khong du
                cout <<"Insufficient Balance..... " << endl;
            }
            break;
        case 3:
        // nhap so tien can gui
            cout <<"Enter the Amount to Deposit: " ;
            cin >> amount;
            atm.depost(amount);
            cout <<"Depost Successfull..." << endl;
            break;
        case 4:
            cout <<"Thanks for using ATM.......!" << endl;
            break;
        default:
            cout <<"Invalid Choice "<< endl;
            break;
        }
    cout <<"\nDo you want to try Another trasation [YES/NO]?: ";
    cin >>choice;
    }while(choice =='y' || choice =='Y');

    system("pause");
    return 0;
}