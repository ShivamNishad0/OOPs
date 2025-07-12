#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double cgpa;

    Student(string name, double cgpa){
        this->name=name;
        this->cgpa=cgpa;

    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "cgps: " << cgpa << endl;
    }


};
int main(){
    Student s1("Shivam", 8.5);
    s1.getInfo();
    Student s2(s1);
    s2.getInfo();

    return 0;
}