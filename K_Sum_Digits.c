// Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.
#include <stdio.h>
int main()
{
    int n, sum = 0;
    char digits[1000001];

    // Read number of digits
    scanf("%d", &n);

    // Read the string of digits
    scanf("%s", digits);

    // Calculate the sum of digits
    for (int i = 0; i < n; i++)
    {
        sum += digits[i] - '0'; // Convert char to int
    }

    // Print the result
    printf("%d\n", sum);

    return 0;
}