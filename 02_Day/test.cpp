#include<iostream>
#include<string>
using namespace std;

class Customer{

    private:
        double balance;
    public:
        int id;
        string name;
        string email;   
        string phone;
        string address;
        string password;
        // Parameterized constructor
        Customer(int i, string n, string e, string p, string a, string pass){
            id = i;
            name = n;
            email = e;
            phone = p;
            address = a;
            password = pass;
            balance = 0.0; // Initialize balance to 0
            cout << "Customer created with ID: " << id << endl;
        }       
        // Method to set balance
        void setBalance(double b) {
            balance = b;
        }
        // Method to get balance
        double getBalance() {
            return balance;
        }   
};
int main() {
    // Create a Customer object using the parameterized constructor
    Customer c1(1, "John Doe", "sn.shivamni@gmail.com", "1234567890", "123 Main St", "password123");
    cout << "Customer ID: " << c1.id << endl;
    cout << "Name: " << c1.name << endl;
    cout << "Email: " << c1.email << endl;
    cout << "Phone: " << c1.phone << endl;
    cout << "Address: " << c1.address << endl;
    c1.setBalance(1000.0);
    cout << "Balance: " << c1.getBalance() << endl;
    return 0;
}