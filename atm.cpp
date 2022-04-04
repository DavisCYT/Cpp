#include <iostream>
#include <algorithm>
using namespace std;

void showMenu(){
    cout << "**********MENU**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Transfer money" << endl;
    cout << "5. Exit" << endl;
    cout << "************************" << endl;

}

int main(){
    //check balance, deposit money, withdraw, show menu
    int option;
    double balance = 500;
    
    do{
    showMenu();   
    cout << "Please choose an option: " << endl;
    cin >> option;

    switch(option){
    case 1: 
        cout << "Balance is: $" << balance << endl; 
        break;
    case 2: 
        cout << "Deposit amount: $";
        double depositAmt;
        cin >> depositAmt;
        balance += depositAmt;
        break; 
    case 3: 
        cout << "Withdraw amount: $" << endl; 
        double withdrawAmt;
        cin >> withdrawAmt;
        if(withdrawAmt <= balance){
            balance -= withdrawAmt;
        } else {
            cout << "Not enough money" << endl;
        }
        break;
    case 4:
        cout << "Transfer account: " << endl;
        // Assume 6 digit account number
        int acctNum;
        cin >> acctNum;
        while(acctNum < 100000 | acctNum > 999999){
            cout << "Invalid accout number, please input again." << endl;
            cin >> acctNum;
        }
        cout << "Transfer amout: $" << endl;
        double transferAmt;
        cin >> transferAmt;
        if(transferAmt <= balance){
            balance -= transferAmt;
            cout << "$" << transferAmt << " has been transfered to Accout : " << acctNum << endl;
        } else {
            cout << "Not enought money" << endl;
        }
        break;
    
    }
    } while (option != 5);

    return 0;
}