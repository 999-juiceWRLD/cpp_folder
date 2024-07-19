#include <iostream>
using namespace std;

template <typename T> T getMax(T first, T second) {
    return max(first, second);
}

int main() {

    int returnInt = getMax(1, 3);
    float retFloat = getMax(1.9, 3.2);
    char retChar = getMax('a', 'b');

    cout << returnInt << endl;
    cout << retFloat << endl;
    cout << retChar << endl;

}
