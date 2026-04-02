#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int Area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r1(4, 5);
    Rectangle r2(5, 8);

    cout << "Area of first rectangle: " << r1.Area() << endl;
    cout << "Area of second rectangle: " << r2.Area() << endl;

    return 0;
}
