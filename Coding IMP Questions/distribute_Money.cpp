#include <iostream>
#include <vector>
using namespace std;

/*
  Function to distribute bank money to customers
  Prints 1 if customer gets money, else 0
*/
void distributeMoney(int N, int A, vector<int>& cust) {
    cout << "Output: ";
    for (int i = 0; i < N; i++) {
        if (cust[i] <= A) {
            cout << 1;
            A -= cust[i];
        } else {
            cout << 0;
        }
    }
    cout << endl;
}

int main() {

    // ---------- Test Case 1 ----------
    cout << "Test Case 1" << endl;
    int N1 = 5;
    int A1 = 100;
    vector<int> cust1 = {20, 30, 10, 50, 15};
    distributeMoney(N1, A1, cust1);

    // ---------- Test Case 2 (First customer fails) ----------
    cout << "\nTest Case 2" << endl;
    int N2 = 4;
    int A2 = 50;
    vector<int> cust2 = {60, 10, 20, 5};
    distributeMoney(N2, A2, cust2);

    // ---------- Test Case 3 (Exact balance becomes zero) ----------
    cout << "\nTest Case 3" << endl;
    int N3 = 5;
    int A3 = 75;
    vector<int> cust3 = {20, 30, 25, 10, 5};
    distributeMoney(N3, A3, cust3);

    // ---------- Test Case 4 (Zero & large requests) ----------
    cout << "\nTest Case 4" << endl;
    int N4 = 6;
    int A4 = 40;
    vector<int> cust4 = {0, 15, 50, 5, 20, 0};
    distributeMoney(N4, A4, cust4);

    // ---------- Test Case 5 (Bank has zero money) ----------
    cout << "\nTest Case 5" << endl;
    int N5 = 3;
    int A5 = 0;
    vector<int> cust5 = {5, 0, 0};
    distributeMoney(N5, A5, cust5);

    return 0;
}

// Test Case 1
// Output: 11101

// Test Case 2
// Output: 0111

// Test Case 3
// Output: 11100

// Test Case 4
// Output: 110110

// Test Case 5
// Output: 011
