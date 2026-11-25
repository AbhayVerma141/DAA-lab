/*Given two array arr1 and arr2 your task is to find out the smallest difference between two array elements.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[] = {1, 3, 15, 11, 2};
    int arr2[] = {23, 127, 235, 19, 8};

    int n = 5, m = 5;
    int minDiff = abs(arr1[0] - arr2[0]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            int diff = abs(arr1[i] - arr2[j]);

            if (diff < minDiff) {
                minDiff = diff;
            }
        }
    }

    printf("Smallest difference = %d", minDiff);

    return 0;
}
