#include <iostream>
using namespace std;

/*
------------------------------------------------------------
 Function Name : repeatedDigitSum

 Problem:
 - Repeatedly sum digits r times
 - Reduce to single digit
------------------------------------------------------------
*/
int digitSum(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

void repeatedDigitSum(int n, int r) {
    for (int i = 0; i < r; i++)
        n = digitSum(n);

    while (n >= 10)
        n = digitSum(n);

    cout << "Output: " << n << endl;
}

int main() {

    cout << "Test Case 1" << endl;
    repeatedDigitSum(99, 3);

    return 0;
}




// ✅ 9️⃣ Repeated Digit Sum

// TC1

// Input : n=9, r=5
// Output: 9


// TC2

// Input : n=99, r=1
// Output: 9


// TC3

// Input : n=12345, r=1
// Output: 6


// TC4

// Input : n=9999, r=2
// Output: 9


// TC5

// Input : n=0, r=10
// Output: 0
