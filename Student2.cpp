#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    string phone_number;
    string address;
};

int main() {
    Student s1, s2;

    s1.name = "Sam";
    s1.roll_no = 1;
    s1.phone_number = "0712345678";
    s1.address = "Nairobi";

    s2.name = "John";
    s2.roll_no = 2;
    s2.phone_number = "0798765432";
    s2.address = "Nakuru";

    cout << "Student 1 Details" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.roll_no << endl;
    cout << "Phone Number: " << s1.phone_number << endl;
    cout << "Address: " << s1.address << endl;

    cout << endl;

    cout << "Student 2 Details" << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Roll Number: " << s2.roll_no << endl;
    cout << "Phone Number: " << s2.phone_number << endl;
    cout << "Address: " << s2.address << endl;

    return 0;
}
