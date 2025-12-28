#include <iostream>
#include <vector>
using namespace std;

/*
------------------------------------------------------------
 Function Name : findOdd

 Problem:
 - Every element appears twice except one
 - Find that odd occurring element

 Logic:
 - XOR of same numbers = 0
------------------------------------------------------------
*/
void findOdd(vector<int>& arr) {
    int x = 0;

    for (int v : arr)
        x ^= v;

    cout << "Output: " << x << endl;
}

int main() {

    cout << "Test Case 1" << endl;
    vector<int> a1 = {2, 2, 3, 1, 1};
    findOdd(a1);

    return 0;
}



// ✅ 🔟 Find Odd Occurring Element

// TC1

// Input : {1}
// Output: 1


// TC2

// Input : {2, 2, 3}
// Output: 3


// TC3

// Input : {5, 5, 7, 7, 9}
// Output: 9


// TC4

// Input : {10, 10, 10}
// Output: 10


// TC5

// Input : {4, 3, 4, 3, 4}
// Output: 4