#include <iostream>
using namespace std;

/*
------------------------------------------------------------
 Function Name : toggleBits

 Problem:
 - Given a number, toggle all its binary bits till MSB

 Example:
 Input  : 10  (Binary: 1010)
 Output : 5   (Binary: 0101)

 Logic:
 - Count number of bits in the number
 - Create a mask of all 1s for that length
 - XOR the number with the mask
------------------------------------------------------------
*/
void toggleBits(int n) {
    int bits = 0;
    int temp = n;

    // Count number of bits
    while (temp > 0) {
        bits++;
        temp >>= 1;
    }

    // Create mask like 111... (bits times)
    int mask = (1 << bits) - 1;

    cout << "Output: " << (mask ^ n) << endl;
}

int main() {

    cout << "Test Case 1" << endl;
    toggleBits(10);

    return 0;
}

/*
Expected Output:
5
*/


// ✅ 2️⃣ Toggle All Bits of a Number (Till MSB)

// TC1

// Input : 1
// Output: 0


// TC2

// Input : 2
// Output: 1


// TC3

// Input : 7
// Output: 0


// TC4

// Input : 10
// Output: 5


// TC5

// Input : 15
// Output: 0