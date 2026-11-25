/*Square every element and return it sorted without sorting again*/

#include <stdio.h>

void sortedSquares(int arr[], int n, long long result[]) {

    int left = 0;
    int right = n - 1;

    int pos = n - 1;

    while (left <= right) {

        long long l = (long long)arr[left] * arr[left];
        long long r = (long long)arr[right] * arr[right];

        if (l > r) {
            result[pos] = l;
            left++;
        }
        else {
            result[pos] = r;
            right--;
        }

        pos--;
    }
}

int main() {

    int arr[] = {-7, -3, 2, 3, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    long long result[n];

    sortedSquares(arr, n, result);

    printf("Sorted squared array: ");

    for (int i = 0; i < n; i++) {
        printf("%lld ", result[i]);
    }

    return 0;
}