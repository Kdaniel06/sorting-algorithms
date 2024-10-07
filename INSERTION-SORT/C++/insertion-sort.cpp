#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

void insertion_sort(vector<int> &arr){
    int array_length = arr.size(); // Get the size of the input array

    // Go into the elements of the array
    for (int i = 0; i < array_length; i++) {
        int pos = i; // This will be the position to swap
        int aux = arr[i]; // Current element

        // Compare the current element with each previous element
        while ((pos > 0) && (arr[pos-1] > aux)) {
            // Change if necessary
            arr[pos] = arr[pos-1];
            pos--;
        }
        arr[pos] = aux;
    }
    
}

int main(){
    vector<int> nums = {4, 5, 8, 1, 3, 2, 9, 10, 6};

    insertion_sort(nums);

    // Print the sorted array (size_t for compare signed and unsigned int expresion warning)
    cout << "Sorted Array: ";
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    getch();
    return 0;
}