// Sum a range of numbers recursively

#include <cs50.h>
#include <stdio.h>

int sigma(int m);

int main(void)
{
    int n;
    do
    {
        n = get_int("positive integer: ");
    }
    while (n < 1);
    int answer = sigma(n);
    printf("%i\n", answer); // Print to console
}

// Returns sum of 1 through m
int sigma(int m)
{
    if (m <= 0)
    {
        return 0;
    }
    else
    {
        return (m + sigma(m - 1));
    }
// Thanks for looking
}
