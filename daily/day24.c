/*A peak element is an element that is strictly greater than its neighbors. Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

Constraints: The complexity of your code should be O(logn)*/


#include <stdio.h>

int findPeak(int arr[], int n) {

    int low = 0;
    int high = n - 1;

    while (low < high) {

        int mid = low + (high - low) / 2;

        if (arr[mid] < arr[mid + 1]) {

            low = mid + 1;

        }
        else {

            high = mid;
        }
    }

    return low;
}

int main() {

    int arr[] = {1, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = findPeak(arr, n);

    printf("Peak element = %d\n", arr[index]);
    printf("Peak index = %d", index);

    return 0;
}
