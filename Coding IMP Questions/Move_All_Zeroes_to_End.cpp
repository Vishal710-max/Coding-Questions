#include <iostream>
#include <vector>
using namespace std;

/*
------------------------------------------------------------
 Function Name : moveZeroes

 Problem:
 - Given an array, move all 0 values to the end
 - Maintain the relative order of non-zero elements

 Example:
 Input  : {4, 5, 0, 1, 9, 0, 5, 0}
 Output : {4, 5, 1, 9, 5, 0, 0, 0}

 Logic:
 - Create a temporary array
 - First copy all non-zero elements
 - Then append remaining positions with 0
------------------------------------------------------------
*/
void moveZeroes(vector<int>& arr) {
    vector<int> temp;

    // Step 1: Copy all non-zero elements
    for (int x : arr) {
        if (x != 0)
            temp.push_back(x);
    }

    // Step 2: Fill remaining positions with zero
    while (temp.size() < arr.size())
        temp.push_back(0);

    // Print result
    cout << "Output: ";
    for (int x : temp)
        cout << x << " ";
    cout << endl;
}

int main() {

    cout << "Test Case 1" << endl;
    vector<int> a1 = {4, 5, 0, 1, 9, 0, 5, 0};
    moveZeroes(a1);

    return 0;
}

/*
Expected Output:
4 5 1 9 5 0 0 0
*/


// ✅ 1️⃣ Move All Zeroes to End (Order Preserved)

// TC1

// Input : {0, 0, 0}
// Output: {0, 0, 0}


// TC2

// Input : {1, 2, 3}
// Output: {1, 2, 3}


// TC3

// Input : {0, 1, 0, 2, 0, 3}
// Output: {1, 2, 3, 0, 0, 0}


// TC4

// Input : {5, 0, 0, 6}
// Output: {5, 6, 0, 0}


// TC5

// Input : {0, 5, 0, 0, 7}
// Output: {5, 7, 0, 0, 0}