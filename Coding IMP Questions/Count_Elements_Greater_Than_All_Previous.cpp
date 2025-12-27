#include <iostream>
#include <vector>
using namespace std;

/*
------------------------------------------------------------
 Function Name : countLeaders

 Problem:
 - Count elements which are greater than all elements before them

 Logic:
 - Maintain maximum so far
 - Increment count whenever current > max
------------------------------------------------------------
*/
void countLeaders(vector<int>& arr) {
    int maxSoFar = arr[0];
    int count = 1;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxSoFar) {
            count++;
            maxSoFar = arr[i];
        }
    }

    cout << "Output: " << count << endl;
}

int main() {

    cout << "Test Case 1" << endl;
    vector<int> a1 = {7, 4, 8, 2, 9};
    countLeaders(a1);

    return 0;
}



// ✅ 5️⃣ Count Elements Greater Than All Previous

// TC1

// Input : {5}
// Output: 1


// TC2

// Input : {5, 4, 3, 2}
// Output: 1


// TC3

// Input : {1, 2, 3, 4}
// Output: 4


// TC4

// Input : {10, 5, 8, 3, 9}
// Output: 2


// TC5

// Input : {7, 7, 7}
// Output: 1