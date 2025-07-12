#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;

    }

    Student(Student &obj){
        this->name=obj.name;
        cgpaPtr=new double;
        *cgpaPtr=*obj.cgpaPtr;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "cgps: " << *cgpaPtr << endl;
    }


};
int main(){
    Student s1("Shivam", 8.5);
    s1.getInfo();
    Student s2(s1);
    s2.getInfo();
    *(s2.cgpaPtr)=9.2;
    s1.getInfo();

    return 0;
}