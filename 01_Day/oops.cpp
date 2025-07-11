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

};

int main(){
    Teacher t1;
    t1.name="Shivam";
    t1.dept="MCA";
    t1.subject="DSA";
    cout << "Name: " << t1.name << endl;
    return 0;
}
