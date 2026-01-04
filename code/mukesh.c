#include <stdio.h>
#include <string.h>

int checkPassword(char pass[]) {
    int i;
    int digit = 0, upper = 0;
    int length = strlen(pass);

    // Check characters
    for (i = 0; pass[i] != '\0'; i++) {
        if (pass[i] >= '0' && pass[i] <= '9') {
            digit = 1;
        }
        if (pass[i] >= 'A' && pass[i] <= 'Z') {
            upper = 1;
        }
    }

    // Validation
    if (length >= 8 && digit == 1 && upper == 1)
        return 1;
    else
        return 0;
}

int main() {
    char password[30];

    printf("Enter password: ");
    scanf("%s", password);

    if (checkPassword(password))
        printf("Password is VALID\n");
    else
        printf("Password is INVALID\n");

    return 0;
}
