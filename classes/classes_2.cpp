#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int height;
        bool checkNumber(int number) {
            if (number <= 0) {
                cout << "You can't have an edge is less or equals to 0. (Entered: " << number << ")" << endl;
                return false;
            } else {
                cout << "Number " << number << " is okay to proceed with." << endl;
                return true;
            }
         }

    public:
        Rectangle() {
            cout << "instance of Rectangle() created" << endl;
        }
        Rectangle(int length, int height) {
            cout << "instance of Rectangle(l, h) created" << endl;
            // setLength(length);
            // setHeight(height);
            // commented code above and code with this operator would both work
            this -> length = length;
            this -> height = height;
        }

        int area() {
            return length * height;
        }
        int perimeter() {
            return 2 * (length + height);
        }
        // getters and setters
        void setLength(int l) {
            bool result = checkNumber(l);
            if (result) {
                length = l;
            } else {
                cout << "Setting length is failed." << endl;
            }
        }
        void setHeight(int h) {
            bool result = checkNumber(h);
            if (result) {
                height = h;
            } else {
                cout << "Setting height is failed." << endl;
            }
        }
        int getLength() {
            return length;
        }
        int getHeight() {
            return height;
        }
};

int main() {

    Rectangle rect;
    Rectangle* rPtr = &rect;

    rPtr -> setHeight(10);
    rPtr -> setLength(5);
    // rPtr -> setLength(-2);
    // rPtr -> setHeight(0);

    // cout << rPtr -> area() << endl;

    Rectangle newRect(9, 3);
}
