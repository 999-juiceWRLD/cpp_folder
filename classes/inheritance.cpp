#include <iostream>

class Base {
    private:
        int z = 3;
    public:
        int x;
        // void showZ() {
        //     std::cout << z << std::endl;
        // }
        void show() {
            std::cout << x << std::endl;
        }
    protected:
        int q = 9;
};

class Derived : public Base {
    public:
        int y;

        void display() {
            std::cout << q << " and " << y << std::endl;
        }

        void showQ() {
            std::cout << q << std::endl;
        }
};


int main() {
    Derived drv;
    drv.x = 10;
    drv.y = 15;
    drv.showQ();
    drv.show();
    drv.display();
}
