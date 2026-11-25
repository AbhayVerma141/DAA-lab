/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.*/

#include <stdio.h>

int main() {

    int nums1[] = {1, 3};
    int nums2[] = {2};

    int m = 2, n = 1;
    int merged[m + n];

    int i = 0, j = 0, k = 0;

//Merge
    while (i < m && j < n) {

        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        }
        else {
            merged[k++] = nums2[j++];
        }
    }

// Copy remaining elements of nums1
    while (i < m) {
        merged[k++] = nums1[i++];
    }

// Copy remaining elements of nums2
    while (j < n) {
        merged[k++] = nums2[j++];
    }

// Calculate median
    int total = m + n;
    double median;

    if (total % 2 == 0) {
        median = (merged[total / 2 - 1] +
                  merged[total / 2]) / 2.0;
    }
    else {
        median = merged[total / 2];
    }

    printf("Median = %.2f", median);

    return 0;
}
