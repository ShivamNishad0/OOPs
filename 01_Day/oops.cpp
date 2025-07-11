#include<iostream>
#include<string>
using namespace std;

class Teacher{
// properties / attributes
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
   

// methods / functions
    void changedept(string newdept){
        dept = newdept;
    }

// setter
    void setSalary(double s){
        salary=s;
    }
//getter
    double getSalary(){
        return salary;
    }

};

int main(){
    Teacher t1;
    t1.name="Shivam";
    t1.dept="MCA";
    t1.subject="DSA";
    t1.setSalary(50000);
    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getSalary() << endl;
    t1.changedept("Computer Science");
    cout << "Updated Department: " << t1.dept << endl;
    return 0;
}
