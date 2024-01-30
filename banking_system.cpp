#include <bits/stdc++.h>
using namespace std;

#define read()              freopen("input.txt", "r", stdin)
#define write()             freopen("output.txt", "w", stdout)


class currentAccount{
public:
    string name;
    string contactNo;
    string dateofbirth;
    string address;
    int balance = 0;
    int passward;
    currentAccount(){}
    currentAccount(string n, string cn, string crd, string add, int bal, int pass){
        name = n;
        contactNo = cn;
        dateofbirth = crd;
        address = add;
        balance = bal;
        passward = pass;
    }

};
class savingAccount{
public:
    string name;
    string contactNo;
    string dateofbirth;
    string address;
    int balance;
    int passward;
    savingAccount(){}
    savingAccount(string n, string cn, string crd, string add, int bal, int pass){
        name = n;
        contactNo = cn;
        dateofbirth = crd;
        address = add;
        balance = bal;
        passward = pass;
    }
};

class salaryAccount{
public:
    string name;
    string contactNo;
    string dateofbirth;
    string address;
    int balance;
    int passward;
    salaryAccount(){}
    salaryAccount(string n, string cn, string crd, string add, int bal, int pass){
        name = n;
        contactNo = cn;
        dateofbirth = crd;
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
    cout << "====================================================================" << endl;
}

void createCurrentAccount(){
    string name;
    string contactNo;
    string dateofbirth;
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
    cin >> dateofbirth;
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
    customer[++curCusId] = currentAccount(name, contactNo, dateofbirth, address, balance, passward);
    cout << "Congratulations!!!!!... You have successfully created your Account" << endl;
    cout << "Your Account ID is " << 100 + curCusId << endl << endl << endl;
    cout << "====================================================================" << endl;
}

void createSavingAccount(){
    string name;
    string contactNo;
    string dateofbirth;
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
    cin >> dateofbirth;
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
    customer1[++curCusId1] = savingAccount(name, contactNo, dateofbirth, address, balance, passward);
     cout << "Congratulations!!!!!... You have successfully created your Account" << endl;
    cout << "Your Account ID is " << 200 + curCusId1 << endl << endl;
   cout << "====================================================================" << endl;
}

void createSalaryAccount(){
    string name;
    string contactNo;
    string dateofbirth;
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
    cin >> dateofbirth;
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
    customer2[++curCusId2] = salaryAccount(name, contactNo, dateofbirth, address, balance, passward);
     cout << "Congratulations!!!!!... You have successfully created your Account" << endl;
    cout << "Your Account ID is " << 300 + curCusId2 << endl << endl;
   cout << "====================================================================" << endl;

}

void changeDetails(){
    cout << "1. Change name" << endl;
    cout << "2. Change passward" << endl;
    cout << "3. Change date of birth" << endl;
    cout << "4. Change address" << endl;
    cout << "5. Change contact Number" << endl;
    cout << "====================================================================" << endl;

}
void updateCurrentAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer[id-100].passward != passward){
        cout << "Wrong passward!!!!!\n Try Again!!!" << endl;
        return;
    }

    changeDetails();
    cout << "press anykey ";
    int k;
    cin >> k;
    if(k == 1){
        cout << "Enter new name " << endl;
        string nm;
        cin >> nm;
        customer[id-100].name = nm;
    }
    if(k == 2){
        cout << "Enter new passward " << endl;
        int nm;
        cin >> nm;
        customer[id-100].passward = nm;
    }
    if(k == 3){
        cout << "Enter new date of birth " << endl;
        string nm;
        cin >> nm;
        customer[id-100].dateofbirth = nm;
    }
    if(k == 4){
        cout << "Enter new address " << endl;
        string nm;
        cin >> nm;
        customer[id-100].address = nm;
    }
    cout << "Update Done!!!!!!!" << endl;
    cout << endl << endl << endl;
    cout << "====================================================================" << endl;

}

void updateSavingAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer1[id-200].passward != passward){
        cout << "Wrong passward!!!!!\n Try Again!!!" << endl;
        return;
    }

    changeDetails();
    cout << "press anykey ";
    int k;
    cin >> k;
    if(k == 1){
        cout << "Enter new name " << endl;
        string nm;
        cin >> nm;
        customer1[id-200].name = nm;
    }
    if(k == 2){
        cout << "Enter new passward " << endl;
        int nm;
        cin >> nm;
        customer1[id-200].passward = nm;
    }
    if(k == 3){
        cout << "Enter new date of birth " << endl;
        string nm;
        cin >> nm;
        customer1[id-200].dateofbirth = nm;
    }
    if(k == 4){
        cout << "Enter new address " << endl;
        string nm;
        cin >> nm;
        customer1[id-200].address = nm;
    }
    cout << "Update Done!!!!!!! " << endl;
    cout << endl << endl << endl;
    cout << "====================================================================" << endl;

}

void updateSalaryAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer2[id-300].passward != passward){
        cout << "Wrong passward!!!!!\n Try Again!!!" << endl;
        return;
    }

    changeDetails();
    cout << "press anykey ";
    int k;
    cin >> k;
    if(k == 1){
        cout << "Enter new name " << endl;
        string nm;
        cin >> nm;
        customer2[id-300].name = nm;
    }
    if(k == 2){
        cout << "Enter new passward " << endl;
        int nm;
        cin >> nm;
        customer2[id-300].passward = nm;
    }
    if(k == 3){
        cout << "Enter new date of birth " << endl;
        string nm;
        cin >> nm;
        customer2[id-300].dateofbirth = nm;
    }
    if(k == 4){
        cout << "Enter new address " << endl;
        string nm;
        cin >> nm;
        customer2[id-300].address = nm;
    }
    cout << "Update Done!!!!!!!" << endl;
    cout << endl << endl << endl;
    cout << "====================================================================" << endl;
}

void deleteCurrentAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer[id-100].passward != passward){
        cout << "Wrong passward!!!!!\n Try Again!!!" << endl;
        return;
    }
    customer[id-100].name = "deleted";
    customer[id-100].contactNo = "deleted";
    customer[id-100].address = "deleted";
    customer[id-100].dateofbirth = "deleted";
    customer[id-100].passward = -1;
    customer[id-100].balance = -1;
    cout << endl << endl << "Your Account has been deleted successfully!!!!!!" << endl;
    cout << "====================================================================" << endl;
}

void deleteSavingAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer1[id-200].passward != passward){
        cout << "Wrong passward!!!!!\n Try Again!!!" << endl;
        return;
    }
    customer1[id-200].name = "deleted";
    customer1[id-200].contactNo = "deleted";
    customer1[id-200].address = "deleted";
    customer1[id-200].dateofbirth = "deleted";
    customer1[id-200].passward = -1;
    customer1[id-200].balance = -1;
    cout << endl << endl << "Your Account has been deleted successfully!!!!!!" << endl;
    cout << "====================================================================" << endl;
}

void deleteSalaryAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer2[id-300].passward != passward){
        cout << "Wrong passward!!!!!\n Try Again!!!" << endl;
        return;
    }
    customer2[id-300].name = "deleted";
    customer2[id-300].contactNo = "deleted";
    customer2[id-300].address = "deleted";
    customer2[id-300].dateofbirth = "deleted";
    customer2[id-300].passward = -1;
    customer2[id-300].balance = -1;
    cout << endl << endl << "Your Account has been deleted successfully!!!!!!" << endl;
    cout << "====================================================================" << endl;
}

void depositCurrentAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer[id-100].passward != passward){
        cout << "Wrong passward!!!!!\n Try Again!!!" << endl;
        return;
    }
    int money;
    cout << endl << "Enter the amount you want to deposit" << endl << endl;
    cin >> money;

    customer[id-100].balance += money;

    cout << endl << endl<< "Transactions Sucesssfull!!!!!!" << endl << endl;
    cout << "====================================================================" << endl;

}
void depositSavingAccount(){
     int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer1[id-200].passward != passward){
        cout << "Wrong passward!!!!!\n Try Again!!!" << endl;
        return;
    }
    int money;
    cout << endl << "Enter the amount you want to deposit" << endl << endl;
    cin >> money;

    customer1[id-200].balance += money;

    cout << endl << endl<< "Transactions Sucesssfull!!!!!!" << endl << endl;
    cout << "====================================================================" << endl;
}

void depositSalaryAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer2[id-300].passward != passward){
        cout << "Wrong passward!!!!!\n Try Again!!!" << endl;
        return;
    }
    int money;
    cout << endl << "Enter the amount you want to deposit" << endl << endl;
    cin >> money;

    customer2[id-300].balance += money;

    cout << endl << endl<< "Transactions Sucesssfull!!!!!!" << endl << endl;
    cout << "====================================================================" << endl;
}

void withdrawCurrentAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer[id-100].passward != passward){
        cout << "Wrong passward!!!!!\n Try Again!!!" << endl;
        return;
    }
    int money;
    cout << endl << "Enter the amount you want to withdraw" << endl << endl;
    cin >> money;

    if(customer[id-100].balance - money < 500){
        cout << "Transactions Failed!!!!" << endl;
        cout << "You need to have atleast 500 in your account" << endl<< endl;
        return;
    }

    customer[id-100].balance -= money;

    cout << endl << endl<< "Transactions Sucesssfull!!!!!!" << endl << endl;
    cout << "====================================================================" << endl;
}

void withdrawSavingAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer1[id-200].passward != passward){
        cout << "Wrong passward!!!!!\n Try Again!!!" << endl;
        return;
    }
    int money;
    cout << endl << "Enter the amount you want to withdraw" << endl << endl;
    cin >> money;

    if(customer1[id-200].balance - money < 500){
        cout << "Transactions Failed!!!!" << endl;
        cout << "You need to have atleast 500 in your account" << endl<< endl;
        return;
    }

    customer1[id-200].balance -= money;

    cout << endl << endl<< "Transactions Sucesssfull!!!!!!" << endl << endl;
    cout << "====================================================================" << endl;
}

void withdrawSalaryAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer2[id-300].passward != passward){
        cout << "Wrong passward!!!!!\n Try Again!!!" << endl;
        return;
    }
    int money;
    cout << endl << "Enter the amount you want to withdraw" << endl << endl;
    cin >> money;

    if(customer2[id-300].balance - money < 500){
        cout << "Transactions Failed!!!!" << endl;
        cout << "You need to have atleast 500 in your account" << endl<< endl;
        return;
    }

    customer2[id-300].balance -= money;

    cout << endl << endl<< "Transactions Sucesssfull!!!!!!" << endl << endl;
    cout << "====================================================================" << endl;
}

void searchCurrentAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer[id-100].passward != passward){
        if(customer[id-100].name == "deleted"){
            cout << "Your Account was deleted" << endl;
        }
        else cout << "Wrong passward!!!!!\n Try Again!!!" << endl;

        return;
    }
    cout << "Account found, Your account details" << endl<< endl;

    cout << "Customer Name : " << customer[id-100].name << endl;
    cout << "Customer Address : " << customer[id-100].address << endl;
    cout << "Customer Contact No : " << customer[id-100].contactNo << endl;
    cout << "Customer date of birth : " << customer[id-100].dateofbirth << endl;
    cout << "Customer Balance : " << customer[id-100].balance << endl << endl;

    cout << "====================================================================" << endl;
}
void searchSavingAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer1[id-200].passward != passward){
        if(customer1[id-200].name == "deleted"){
            cout << "Your Account was deleted" << endl;
        }
        else cout << "Wrong passward!!!!!\n Try Again!!!" << endl;

        return;
    }
    cout << "Account found, Your account details" << endl<< endl;

    cout << "Customer Name : " << customer1[id-200].name << endl;
    cout << "Customer Address : " << customer1[id-200].address << endl;
    cout << "Customer Contact No : " << customer1[id-200].contactNo << endl;
    cout << "Customer date of birth : " << customer1[id-200].dateofbirth << endl;
    cout << "Customer Balance : " << customer1[id-200].balance << endl << endl;

    cout << "====================================================================" << endl;
}

void searchSalaryAccount(){
    int id, passward;
    cout << "Enter your bank ID :";
    cin >> id;
    cout << endl;
    cout << "Enter your passward :";
    cin >> passward;
    cout << endl;
    if(customer2[id-300].passward != passward){
        if(customer2[id-300].name == "deleted"){
            cout << "Your Account was deleted" << endl;
        }
        else cout << "Wrong passward!!!!!\n Try Again!!!" << endl;

        return;
    }
    cout << "Account found, Your account details" << endl<< endl;

    cout << "Customer Name : " << customer2[id-300].name << endl;
    cout << "Customer Address : " << customer2[id-300].address << endl;
    cout << "Customer Contact No : " << customer2[id-300].contactNo << endl;
    cout << "Customer date of birth : " << customer2[id-300].dateofbirth << endl;
    cout << "Customer Balance : " << customer2[id-300].balance << endl << endl;

    cout << "====================================================================" << endl;
}
void homepage(){
    while(true){
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl<< endl;
        int key;
        cout << " 1. Create a new account" << endl;
        cout << " 2. Display all accounts" << endl;
        cout << " 3. Update an account" << endl;
        cout << " 4. Delete an account" << endl;
        cout << " 5. Deposit an amount into your account" << endl;
        cout << " 6. Withdraw an amount from your account" << endl;
        cout << " 7. Search for account" << endl;
        cout << " 8. Exit" << endl;

        cout << "Press Any key " << endl;
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
        if(key == 2) displayAccount();
        if(key == 3) {
            displayAccount();
            int x;
            cout << "Press Any key ";
            cin >> x;
            if(x == 1) updateCurrentAccount();
            if(x == 2) updateSavingAccount();
            if(x == 3) updateSalaryAccount();
        }
        if(key == 4) {
            displayAccount();
            int x;
            cout << "Press Any key ";
            cin >> x;
            if(x == 1) deleteCurrentAccount();
            if(x == 2) deleteSavingAccount();
            if(x == 3) deleteSalaryAccount();
        }
        if(key == 5){
            displayAccount();
            int x;
            cout << "Press Any key ";
            cin >> x;
            if(x == 1) depositCurrentAccount();
            if(x == 2) depositSavingAccount();
            if(x == 3) depositSalaryAccount();
        }
        if(key == 6){
            displayAccount();
            int x;
            cout << "Press Any key ";
            cin >> x;
            if(x == 1) withdrawCurrentAccount();
            if(x == 2) withdrawSavingAccount();
            if(x == 3) withdrawSalaryAccount();
        }
        if(key == 7){
            displayAccount();
            int x;
            cout << "Press Any key ";
            cin >> x;
            if(x == 1) searchCurrentAccount();
            if(x == 2) searchSavingAccount();
            if(x == 3) searchSalaryAccount();
        }
        if(key == 8) return;

    }

}


int main(){
    //read();
   // write();
    homepage();

}
