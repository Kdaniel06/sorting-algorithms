#include<iostream>
#include<conio.h>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &arr){
    int array_length = arr.size(); // Get the size of the input array

    // Go into the elements of the array
    for (int i = 0; i < array_length; i++) {

        // Compare the element with the next one
        for (int j = 0; j < array_length-1; j++) {

            // Swap if is necessary
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}

int main(){
    vector<int> nums = {4, 5, 8, 1, 3, 2, 9, 10, 6};

    bubble_sort(nums);

    // Print the sorted array (size_t for compare signed and unsigned int expresion warning)
    cout << "Sorted Array: ";
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    getch();
    return 0;
}