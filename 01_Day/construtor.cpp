#include<iostream>
#include<string>
using namespace std;

class teacher{
private:
    double salary;
public:
    // teacher(){// Non-parameterized constructor
    //     // This constructor does not take any parameters
    //     cout << "This is example of the non-parameterized constructor." << endl;
    // }
    int id;
    string name;
    string subject;
    string dept;

    void setSalary(double s){
        salary = s;
    }
    double getSalary(){
        return salary;
    }

    teacher(int i, string n, string s, string d, double sal){// this is a parameterized constructor
        id=i;
        name=n;
        subject=s;
        dept=d;
        salary=sal;
        cout << "This is example of the parameterized constructor." << endl;

    }
};
int main(){
    teacher t1(101, "Shivam", "DSA", "MCA", 50000.0);
    cout << "ID: " << t1.id << endl;
    cout << "Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Department: " << t1.dept << endl;
    t1.setSalary(60000.0);
    double getSalary = t1.getSalary();
    cout << "Salary: " << getSalary << endl;
   
    return 0;

}