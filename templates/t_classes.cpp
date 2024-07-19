#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// class template

template <class T> class Stack {
    private:
        stack<T> stock;
    public:
        void push(T x) {
            stock.push(x);
            cout << "element " << x << " is pushed into the stack\n";
        }
        T pop() { 
            if (stock.size() != 0) {
                T element = stock.top(); // get the top element
                stock.pop(); // pop the top element
                cout << "element " << element << " is popped out of the stack\n";
            } else {
                cout << "there is no element inside the stack\n";
            }
            return static_cast<T>(0);
        }
};

template <class T> bool isHere(vector<T> vec, int e) {
    for (T el: vec) {
        if (el == e) {
            return true;
        }
    }
    cout << "element " << e << " is not found\n";
    return false;
}

int main() {
    Stack<int> s;
    s.push(10);
    s.push(3);

    s.pop();
    s.pop();
    s.pop();

    cout << endl;
    cout << endl;

    vector<int> vector1 = { 1, 2, 3, 4, 5 };
    vector<char> vector2 = { 'a', 'b', 'c', 'd', 'e' };
    bool result = isHere<int>(vector1, 4);
    bool result2 = isHere<char>(vector2, 'g');
    cout << result << endl;
    cout << result2 << endl;
}
