//activity selection

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of activities: ");
    scanf("%d", &n);

    int start[n], finish[n];

    // Input start and finish times
    for(i = 0; i < n; i++)
    {
        printf("Enter start and finish time of activity %d: ", i + 1);
        scanf("%d %d", &start[i], &finish[i]);
    }

    // Sort activities according to finish time
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(finish[j] > finish[j + 1])
            {
                // Swap finish times
                int temp = finish[j];
                finish[j] = finish[j + 1];
                finish[j + 1] = temp;

                // Swap corresponding start times
                temp = start[j];
                start[j] = start[j + 1];
                start[j + 1] = temp;
            }
        }
    }

    printf("\nSelected Activities:\n");

    // Always select the first activity
    printf("Activity 1: (%d, %d)\n", start[0], finish[0]);

    int lastFinish = finish[0];

    // Check remaining activities
    for(i = 1; i < n; i++)
    {
        if(start[i] >= lastFinish)
        {
            printf("Activity %d: (%d, %d)\n",
                   i + 1, start[i], finish[i]);

            lastFinish = finish[i];
        }
    }

    return 0;
}
