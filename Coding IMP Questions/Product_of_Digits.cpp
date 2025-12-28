#include <iostream>
using namespace std;

/*
------------------------------------------------------------
 Function Name : productOfDigits

 Problem:
 - Find product of all digits of a number

 Logic:
 - Extract digits using modulo 10
------------------------------------------------------------
*/
void productOfDigits(int n) {
    int product = 1;

    while (n > 0) {
        product *= (n % 10);
        n /= 10;
    }

    cout << "Output: " << product << endl;
}

int main() {

    cout << "Test Case 1" << endl;
    productOfDigits(5244);

    return 0;
}



// ✅ 6️⃣ Product of Digits

// TC1

// Input : 0
// Output: 0


// TC2

// Input : 101
// Output: 0


// TC3

// Input : 999
// Output: 729


// TC4

// Input : 123
// Output: 6


// TC5

// Input : 1005
// Output: 0