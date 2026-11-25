/*Given an integer array arr and a target value target, find the indices of two elements whose sum equals target. 
 Assume exactly one valid pair exists, and the same element cannot be used twice.*/
#include <stdio.h>
int main()
{
    int target;
    printf("enter the Target number = ");
    scanf("%d", &target);
    int arr[10]= {1,3,5,6,7,8,10,12,14,15};
    for( int i = 0; i < 10 ; i++)
    {
        for( int j = i+1 ; j < 10; j++ )
        {
            if (arr[i] + arr[j] == target)
            {
                printf(" \n %d %d", i,j);
            }
        }
    }
    return 0;
}

//time complexity O(n^2)

/*
CHATGPT CODE
#include <stdio.h>

int main()
{
    int target;

    printf("Enter the target number = ");
    scanf("%d", &target);

    int arr[10] = {1, 3, 5, 6, 7, 8, 10, 12, 14, 15};

    int left = 0;
    int right = 9;

    while (left < right)
    {
        int sum = arr[left] + arr[right];

        if (sum == target)
        {
            printf("[%d, %d]", left, right);
            return 0;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return 0;
}

time complexity O(n)
*/