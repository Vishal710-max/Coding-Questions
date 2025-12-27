#include <iostream>
using namespace std;

/*
------------------------------------------------------------
 Function Name : circularSeating

 Problem:
 - Find number of circular arrangements
 - Two people must sit together

 Formula:
 - 2 × (n - 1)!
------------------------------------------------------------
*/
long long fact(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

void circularSeating(int n) {
    cout << "Output: " << 2 * fact(n - 1) << endl;
}

int main() {

    cout << "Test Case 1" << endl;
    circularSeating(4);

    return 0;
}


// ✅ 8️⃣ Circular Seating (Two People Together)

// TC1

// Input : n=2
// Output: 2


// TC2

// Input : n=3
// Output: 4


// TC3

// Input : n=4
// Output: 12


// TC4

// Input : n=5
// Output: 48


// TC5

// Input : n=1
// Output: 0