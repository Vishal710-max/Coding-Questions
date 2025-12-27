#include <iostream>
#include <vector>
using namespace std;

/*
------------------------------------------------------------
 Function Name : sort012

 Problem:
 - Sort array containing only 0, 1 and 2

 Logic:
 - Count number of 0s, 1s and 2s Count_number_of_0s_1s_and_2s
 - Print them in order
------------------------------------------------------------
*/
void sort012(vector<int>& arr) {
    int c0 = 0, c1 = 0, c2 = 0;

    // Count occurrences
    for (int x : arr) {
        if (x == 0) c0++;
        else if (x == 1) c1++;
        else c2++;
    }

    cout << "Output: ";
    while (c0--) cout << 0 << " ";
    while (c1--) cout << 1 << " ";
    while (c2--) cout << 2 << " ";
    cout << endl;
}

int main() {

    cout << "Test Case 1" << endl;
    vector<int> a1 = {1, 0, 2, 0, 1, 0, 2};
    sort012(a1);

    return 0;
}


// ✅ 4️⃣ Sort 0s, 1s and 2s

// TC1

// Input : {0, 0, 0}
// Output: {0, 0, 0}


// TC2

// Input : {2, 2, 2}
// Output: {2, 2, 2}


// TC3

// Input : {1, 0, 2}
// Output: {0, 1, 2}


// TC4

// Input : {2, 1, 0, 1, 2, 0}
// Output: {0, 0, 1, 1, 2, 2}


// TC5

// Input : {1}
// Output: {1}