#include<iostream>
#include<string>
using namespace std;

class home{

    public:
        string name;
        home(){
            cout <<"Name is- " << name << endl;
        }
};
int main(){
    home h1;
    h1.name="Shivam nishad";
    return 0;
}