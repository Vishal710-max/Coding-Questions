#include <iostream>
using namespace std;

/*
------------------------------------------------------------
 Function Name : countSundays

 Problem:
 - Given starting day and total number of days
 - Count how many Sundays occur

 Logic:
 - Convert starting day to numeric value
 - Use modulo 7 to identify Sundays
------------------------------------------------------------
*/
void countSundays(string startDay, int days) {
    int start;

    // Map days to numbers
    if (startDay == "sun") start = 0;
    else if (startDay == "mon") start = 1;
    else if (startDay == "tue") start = 2;
    else if (startDay == "wed") start = 3;
    else if (startDay == "thu") start = 4;
    else if (startDay == "fri") start = 5;
    else start = 6;

    int count = 0;

    // Check each day
    for (int i = 0; i < days; i++) {
        if ((start + i) % 7 == 0)
            count++;
    }

    cout << "Output: " << count << endl;
}

int main() {

    cout << "Test Case 1" << endl;
    countSundays("mon", 13);

    return 0;
}

/*
Expected Output:
2
*/



// ✅ 3️⃣ Count Sundays

// TC1

// Input : start=mon, days=1
// Output: 0


// TC2

// Input : start=sun, days=1
// Output: 1


// TC3

// Input : start=sat, days=2
// Output: 1


// TC4

// Input : start=wed, days=14
// Output: 2


// TC5

// Input : start=sun, days=7
// Output: 1