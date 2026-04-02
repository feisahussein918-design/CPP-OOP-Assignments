#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:
    int a, b, c;

    void getData(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    void printAreaAndPerimeter() {
        int perimeter = a + b + c;
        float s = perimeter / 2.0;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "Perimeter of triangle: " << perimeter << endl;
        cout << "Area of triangle: " << area << endl;
    }
};

int main() {
    Triangle t;
    t.getData(3, 4, 5);
    t.printAreaAndPerimeter();

    return 0;
}
