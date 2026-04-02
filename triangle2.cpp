#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    int a, b, c;

public:
    Triangle(int x, int y, int z) {
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
    Triangle t(3, 4, 5);
    t.printAreaAndPerimeter();

    return 0;
}
