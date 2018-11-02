/* By Krishnan Parameswaran */

#include <iostream>

using namespace std;

class Student {
    int serial_number;
    string name;
public:
    Student(){
        cout << "We have a new student..." << endl;
        cout << "$$$$$$" << endl;
    }
    void set_values(int, string);
    void printName(){
        cout << "The name of student " << serial_number << " is " << name << endl;
    }

};

void Student::set_values(int a, string b){
    serial_number = a;
    name = b;
    return;
}


int main(){
    Student st1;
    st1.set_values(1, "Krishnan");
    st1.printName();
}
