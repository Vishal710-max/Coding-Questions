#include <iostream>
using namespace std;

/*
------------------------------------------------------------
 Function Name : maxAcount

 Problem:
 - Divide string into groups of size L
 - Find maximum number of 'a' in any group
------------------------------------------------------------
*/
void maxAcount(string s, int L) {
    int maxCount = 0;

    for (int i = 0; i < s.length(); i += L) {
        int count = 0;

        for (int j = i; j < i + L && j < s.length(); j++) {
            if (s[j] == 'a')
                count++;
        }

        maxCount = max(maxCount, count);
    }

    cout << "Output: " << maxCount << endl;
}

int main() {

    cout << "Test Case 1" << endl;
    maxAcount("aababbaba", 3);

    return 0;
}



// ✅ 7️⃣ Maximum 'a' in Substrings of Length L

// TC1

// Input : s="aaaa", L=2
// Output: 2


// TC2

// Input : s="bbbb", L=2
// Output: 0


// TC3

// Input : s="ababa", L=2
// Output: 1


// TC4

// Input : s="aabbaa", L=3
// Output: 2


// TC5

// Input : s="a", L=3
// Output: 1