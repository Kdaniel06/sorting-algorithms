#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

void selection_sort(vector<int> &arr){
    int array_length = arr.size(); // Get the size of the input array

    // Go into the elements of the array
    for (int i = 0; i < array_length; i++) {
        int min = i; // Asume the first position as the minimum element

        // Find the real minimum element
        for (int j = i + 1; j < array_length; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        // swap
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    
}

int main(){
    vector<int> nums = {4, 5, 8, 1, 3, 2, 9, 10, 6};

    selection_sort(nums);

    // Print the sorted array (size_t for compare signed and unsigned int expresion warning)
    cout << "Sorted Array: ";
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    getch();
    return 0;
}