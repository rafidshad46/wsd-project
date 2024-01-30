#include <bits/stdc++.h>
using namespace std;

#define read()              freopen("input.txt", "r", stdin)
#define write()             freopen("output.txt", "w", stdout)


class currentAccount{
public:
    string name;
    string contactNo;
    string creationDate;
    string address;
    int balance = 0;
    int passward;
    currentAccount(){}
    currentAccount(string n, string cn, string crd, string add, int bal, int pass){
        name = n;
        contactNo = cn;
        creationDate = crd;
        address = add;
        balance = bal;
        passward = pass;
    }

};
class savingAccount{
public:
    string name;
    string contactNo;
    string creationDate;
    string address;
    int balance;
    int passward;
    savingAccount(){}
    savingAccount(string n, string cn, string crd, string add, int bal, int pass){
        name = n;
        contactNo = cn;
        creationDate = crd;
        address = add;
        balance = bal;
        passward = pass;
    }
};

class salaryAccount{
public:
    string name;
    string contactNo;
    string creationDate;
    string address;
    int balance;
    int passward;
    salaryAccount(){}
    salaryAccount(string n, string cn, string crd, string add, int bal, int pass){
        name = n;
        contactNo = cn;
        creationDate = crd;
        address = add;
        balance = bal;
        passward = pass;
    }
};

currentAccount customer[100];
savingAccount customer1[100];
salaryAccount customer2[100];
void homepage();

int curCusId = -1;
int curCusId1 = -1;
int curCusId2 = -1;

void displayAccount(){
    cout << endl << endl << "Type of Account available" << endl << endl;
    cout << "1. Current Account" << endl;
    cout << "2. Saving Account" << endl;
    cout << "3. Salary Account" << endl << endl;
}

void createCurrentAccount(){
    string name;
    string contactNo;
    string creationDate;
    string address;
    int balance;
    int passward;

    cout << "Enter your name :";
    cin >> name;
    cout << endl;

    cout << "Enter your passward(Numeric only) :";
    cin >> passward;
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
    customer[++curCusId] = currentAccount(name, contactNo, creationDate, address, balance, passward);
    cout << "Congratulations!!!!!... You have successfully created your Account" << endl;
    cout << "Your Account ID is " << 100 + curCusId << endl << endl << endl;
    getchar();
    cout << "Press anykey" << endl;
    getchar();
}

void createSavingAccount(){
    string name;
    string contactNo;
    string creationDate;
    string address;
    int balance;
    int passward;

    cout << "Enter your name :";
    cin >> name;
    cout << endl;

    cout << "Enter your passward(Numeric only) :";
    cin >> passward;
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
        createSavingAccount();
    }
    customer1[++curCusId1] = savingAccount(name, contactNo, creationDate, address, balance, passward);
     cout << "Congratulations!!!!!... You have successfully created your Account" << endl;
    cout << "Your Account ID is " << 200 + curCusId1 << endl << endl;
    getchar();
    cout << "Press anykey" << endl;
    getchar();
}

void createSalaryAccount(){
    string name;
    string contactNo;
    string creationDate;
    string address;
    int balance;
    int passward;

    cout << "Enter your name :";
    cin >> name;
    cout << endl;

    cout << "Enter your passward(Numeric only) :";
    cin >> passward;
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
        createSalaryAccount();
    }
    customer2[++curCusId2] = salaryAccount(name, contactNo, creationDate, address, balance, passward);
     cout << "Congratulations!!!!!... You have successfully created your Account" << endl;
    cout << "Your Account ID is " << 300 + curCusId2 << endl << endl;
    getchar();
    cout << "Press anykey" << endl;
    getchar();

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
            displayAccount();
            int x;
            cout << "Press Any key ";
            cin >> x;
            if(x == 1) createCurrentAccount();
            if(x == 2) createSavingAccount();
            if(x == 3) createSalaryAccount();
        }
        if(key == 8) return;
    }

}


int main(){
    //read();
   // write();
    homepage();

}
