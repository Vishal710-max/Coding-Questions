#include <vector>
using namespace std;

// Searching
int linearSearch(const vector<int>&, int);
int binarySearchIterative(const vector<int>&, int);
int binarySearchRecursive(const vector<int>&, int, int, int);
int ternarySearch(const vector<int>&, int, int, int);
int interpolationSearch(const vector<int>&, int);

// Sorting
void bubbleSort(vector<int>&);
void selectionSort(vector<int>&);
void insertionSort(vector<int>&);
void mergeSort(vector<int>&, int, int);
void quickSort(vector<int>&, int, int);
void heapSort(vector<int>&);
void countingSort(vector<int>&);
void radixSort(vector<int>&);
