#include <iostream>

namespace First {
    void func() {
        std::cout << "ayo that's the first" << std::endl;
    }
}

namespace Second {
    void func() {
        std::cout << "now that's the second" << std::endl;
    }
}

int main() {
    First::func();
    Second::func();
}
