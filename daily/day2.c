/*Write a program using a while loop that repeatedly asks the user to enter the password
and stops only when the correct password is entered. Finally, display "Login successful!" */
/*
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char x [] = "Getsetgo10";
    char y [100];

    while (true)
    {
        printf("enter your password -> \n ");
        scanf("%s", y);

        if (strcmp(y, x) == 0)
        {
            printf("password is correct");
            return 0 ;
        }
        else
        {
            printf("\n incorrect password try again \n");
        }
    }
    return 0 ;
}*/

#include <stdio.h>
#include <string.h>

int main()
{
    char password[] = "Getsetgo10";
    char input[100];

    while (1)
    {
        printf("Enter your password: ");
        scanf("%s", input);

        if (strcmp(input, password) == 0)
            break;

        printf("Incorrect password. Try again.\n");
    }

    printf("Login successful!\n");

    return 0;
}