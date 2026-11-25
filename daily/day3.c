/*Given an array of daily temperatures, find the length of the longest consecutive strictly increasing streak.*/
#include<stdio.h>
int main()
{   
    int n;
    int max = 1, count = 1;
    printf("enter the length of array = ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n ; i++)
    {
        printf("enter the %d element of array = ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i ++)
    {
        if (arr[i] > arr[i-1])
        {
            count++;
            if (count > max)
            {
                max = count;
            }
        }
        else
        {
            count = 1;
        }
    }
    printf("the longest consecutive temp = %d", max);
    return 0;
}

//time complexity O(n)

/*___________--CHATGPT CODE--______________
#include <stdio.h>

int main()
{
    int n, temp, prev;
    int count = 1, max = 1;

    printf("Enter the length of array = ");
    scanf("%d", &n);

    printf("Enter the 1st element = ");
    scanf("%d", &prev);

    for (int i = 1; i < n; i++)
    {
        printf("Enter the %d element = ", i + 1);
        scanf("%d", &temp);

        if (temp > prev)
        {
            count++;

            if (count > max)
                max = count;
        }
        else
        {
            count = 1;
        }

        prev = temp;
    }

    printf("Longest increasing streak = %d", max);

    return 0;
}*/
