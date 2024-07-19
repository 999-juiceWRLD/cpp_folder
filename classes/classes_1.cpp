#include <iostream>
using namespace std;

class Rectangle {

    public:
        int length;
        int width;

        int area() {
            return length * width;
        }
        int perimeter() {
            return 2 * (length + width);
        }
};

int main() {
    Rectangle rect;
    // rect.length = 10;
    // rect.width = 19;
    // int result = rect.area();
    // int p_result = rect.perimeter();
    // cout << "Area is " << result << "\n";
    // cout << "Perimeter is " << p_result << "\n";

    Rectangle* rPtr = &rect;
    rPtr -> length = 10;
    rPtr -> width = 11;
    int area = rPtr -> area();
    int perimeter = rPtr -> perimeter();

    printf("Area of rectangle with l: %d and w: %d = %d\n", rPtr -> length, rPtr -> width, rPtr -> area());
    printf("Perimeter of rectangle with l: %d and w: %d = %d\n", rPtr -> length, rPtr -> width, rPtr -> perimeter());

    // to create an object in the heap
    // Reactangle* rectPtr = new Rectangle;
}