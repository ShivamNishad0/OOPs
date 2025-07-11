#include<iostream>
#include<string>
using namespace std;

class Account{
private:
    string password;
    double balance;
public:
    long accountNumber;
    string accountHolderName;
    int age;

};

int main(){
    Account cust1;
    cust1.accountNumber = 8887756715;
    cust1.accountHolderName = "Shivam";
    cust1.age = 30;
    // cust1.password = "securepassword"; // This line would cause an error because password is private
    // cust1.balance = 1000.0; // This line would also
    cout << "Account Number: " << cust1.accountNumber << endl;
    cout << "Account Holder Name: " << cust1.accountHolderName << endl;
    cout << "Age: " << cust1.age << endl;
    return 0;

}