#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8 // define the length of the password

int main(void)
{
    // declare an array of valid characters for the password
    char valid_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=[]{}|;':\",./<>?";

    // seed the random number generator with the current time
    srand((unsigned int) time(NULL));

    // generate a password of length PASSWORD_LENGTH
    char password[PASSWORD_LENGTH + 1]; // add 1 for the null terminator
    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = valid_chars[rand() % (sizeof(valid_chars) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0'; // add the null terminator to the end of the password

    // print the generated password
    printf("Generated password: %s\n", password);

    return 0;
}
