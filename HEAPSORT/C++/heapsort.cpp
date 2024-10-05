#include <iostream>
#include <vector>
using namespace std;

void heapsort(vector<int> &inputArray) {
    int n = inputArray.size() - 1;  // n => The maximum length of unsorted array

    // The main cycle, ends when the entire array is covered
    while (n > 0) {
        // Select the last "node" with sons
        int lastFatherPos = (n - 1) / 2;

        // Work with each father
        while (lastFatherPos >= 0) {
            int largestPos = lastFatherPos;

            // Get the "sons"
            int leftSonPos = 2 * lastFatherPos + 1;
            int rightSonPos = 2 * lastFatherPos + 2;

            // Select the maximum between father and the both sons
            if (rightSonPos <= n && inputArray[largestPos] < inputArray[rightSonPos]) {
                largestPos = rightSonPos;
            }
            if (leftSonPos <= n && inputArray[largestPos] < inputArray[leftSonPos]) {
                largestPos = leftSonPos;
            }

            // Swap if necessary
            if (largestPos != lastFatherPos) {
                swap(inputArray[lastFatherPos], inputArray[largestPos]);
            }

            // Select the previous father
            lastFatherPos--;
        }

        // Swap the root with the last element if necessary
        if (inputArray[0] > inputArray[n]) {
            swap(inputArray[0], inputArray[n]);
        }

        // Cut the max node (last one)
        n--;
    }
}

int main() {
    vector<int> inputArray = {5, 8, 6, 1, 4, 10, 3, 9, 2, 0};

    heapsort(inputArray);

    // Print the sorted array
    for (size_t i = 0; i < inputArray.size(); i++) {
        cout << inputArray[i] << " ";
    }
    cout << endl;

    return 0;
}
