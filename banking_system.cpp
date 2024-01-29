#include <bits/stdc++.h>
using namespace std;

#define read()              freopen("input.txt", "r", stdin)
#define write()             freopen("output.txt", "w", stdout)
void homepage();

int curCusId = -1;

class currentAccount{
public:
    string name;
    string contactNo;
    string creationDate;
    string address;
    int balance = 0;
    currentAccount(){}
    currentAccount(string n, string cn, string crd, string add, int bal){
        name = n;
        contactNo = cn;
        creationDate = crd;
        address = add;
        balance = bal;
    }

};
class savingAccount{
    string name;
    string contactNo;
    string creationDate;
    string address;
    int balance;
};

class salaryAccount{
    string name;
    string contactNo;
    string creationDate;
    string address;
    int balance;
};
currentAccount customer[100];

void createCurrentAccount(){
    string name;
    string contactNo;
    string creationDate;
    string address;
    int balance;

    cout << "Enter your name :";
    cin >> name;
    cout << endl;

    cout << "Enter your Contact Number :";
    cin >> contactNo;
    cout << endl;

    cout << "Enter today's date int dd/mm/yyyy formal :";
    cin >> creationDate;
    cout << endl;

    cout << "Enter your Address :";
    cin >> address;
    cout << endl;

    cout << "Enter amount you want to deposit :";
    cin >> balance;
    cout << endl;
    if(balance < 500){
        cout << "Sorry You need to have Minimum 500 in your create account " << endl;
        createCurrentAccount();
    }
    customer[++curCusId] = currentAccount(name, contactNo, creationDate, address, balance);

}
void homepage(){
    while(true){
        int key;
        cout << " 1. Create a new account" << endl;
        cout << " 2. Display all accounts" << endl;
        cout << " 3. Update an account" << endl;
        cout << " 4. Delete an account" << endl;
        cout << " 5. Deposit an amount into your account" << endl;
        cout << " 6. Withdraw an amount from your account" << endl;
        cout << " 7. Search for account" << endl;
        cout << " 8. Exit" << endl;

        cout << "Press Any key ";
        cin >> key;
        if(key == 1){
            createCurrentAccount();
        }
        if(key == 8) return;
    }

}

int main(){
    //read();
   // write();

    homepage();

}
