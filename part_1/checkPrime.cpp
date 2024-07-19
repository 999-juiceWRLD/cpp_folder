#include <iostream>
#include <vector>
using namespace std;

void isPrime(int number) {
    if (number <= 1) {
        cout << "number must be an integer bigger than 1.\n";
        return;
    } else {
        bool isPrime = true;
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = false;
            } else {
                continue;
            }
        }
        if (isPrime) {
            cout << number << ", it's a prime!\n";
        } else {
            cout << number << " is not prime\n";
        }
    }
}

vector<int> factorize(int n) {
    vector<int> vectorArray;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            vectorArray.push_back(i);
        }
    }
    return vectorArray;
}

void logFactors(vector<int> arrOfVec) {
    for (int i: arrOfVec) {
        // vector<int> arr = factorize(e);
        // cout << e;
        vector<int> factorsOfArr = factorize(i);
        cout << "for the number " << i << ":\n";
            for (int i: factorsOfArr) {
                std::cout << i << ' ';
                cout << "\n";
            }
            cout << "############\n";
    }
}

int main(void) {

    // isPrime(1);
    // isPrime(0);
    // isPrime(10);
    // isPrime(13);
    // isPrime(15);
    // isPrime(17);
    // isPrime(19);
    // isPrime(431);

    vector<int> factors = factorize(10);
    vector<int> factorList = {10, 13, 12, 14, 34, 35, 65, 68};
    logFactors(factorList);
}