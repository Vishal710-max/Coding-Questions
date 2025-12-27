#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> arr(N);

    // Read stone weights and check impossible case
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] > C) {
            cout << -1;   // Not possible to store this stone
            return 0;
        }
    }

    // Sort stones
    sort(arr.begin(), arr.end());

    int i = 0, j = N - 1;
    int boxes = 0;

    // Two-pointer greedy approach
    while (i <= j) {
        if (arr[i] + arr[j] <= C) {
            i++;   // lightest stone paired
        }
        j--;       // heaviest stone always used
        boxes++;
    }

    cout << boxes;
    return 0;
}


// 🧪 Tricky Test Cases (Practice These)
// 1️⃣ Normal case
// Input:
// 4 60
// 10 20 30 40

// Output:
// 2

// 2️⃣ Impossible case (stone > capacity)
// Input:
// 4 10
// 20 30 5 7

// Output:
// -1

// 3️⃣ All stones same
// Input:
// 5 20
// 10 10 10 10 10

// Output:
// 3

// 4️⃣ Single stone
// Input:
// 1 15
// 15

// Output:
// 1

// 5️⃣ Large capacity
// Input:
// 5 100
// 5 10 15 20 25

// Output:
// 1