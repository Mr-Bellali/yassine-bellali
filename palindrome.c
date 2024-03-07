#include <stdio.h>

int main() {
    int number, rev = 0, mod, testNumber;

    printf("Enter a number: ");
    scanf("%d", &number);
    testNumber = number;

    while (testNumber != 0)
    {
        mod = testNumber % 10;
        rev = rev * 10 + mod;
        testNumber = testNumber / 10;
    }

    if (number == rev)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
}
