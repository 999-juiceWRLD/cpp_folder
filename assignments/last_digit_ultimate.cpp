#include <iostream>
using namespace std;

/**
This is the solution of a problem shown in edabit.com
*/

int factorize(int n) {
    int factorizedNum = n;
    do {
        if (n < 10) {
            
        } else {
            factorizedNum = factorizedNum % 10;
            // cout << factorizedNum << endl;
        }
    } while (factorizedNum > 10);
    cout << "factorized result of " << n << " is " << factorizedNum << endl;
    return n;
}

bool lastDig(int a, int b, int c) {
    int absA = abs(a);
    int absB = abs(b);
    int absC = abs(c);

    int prodA = factorize(absA);
    int prodB = factorize(absB);
    int prodC = factorize(absC);

    int prodRes = prodA * prodB;
    prodRes = abs(prodRes);
    prodRes = factorize(prodRes);

    if (prodC == prodRes) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // bool res = lastDig(15 ,1, 1);
    int number = factorize(123);
    int number2 = factorize(10);
    int number3 = factorize(abs(-49));
    int number4 = factorize(1);
    int number5 = factorize(abs(-9));
     
    // cout << "(15, 1, 1) -> " << res << endl;
}
