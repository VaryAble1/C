#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // memory for numbers
    int *numbers = NULL;
    int capacity = 0;

    // Prompt for numbers (until EOF)
    int size = 0;
    while (true)
    {
        // Promt for number
        int number = get_int("number: ");

        // Check for EOF
        if (number == INT_MAX) // Found in get_int docs
        {
            break;
        }

        // Check whether number is already in list
        bool found = false;
        for (int i = 0; i < size; i++)
        {
            if (numbers[i] == number)
            {
                found = true;
                break;
            }
        }

        // If number is not found in list, add to list
        if (!found)
        {
            // Check whether enough space for number exists
            if (size == capacity)
            {
                // Allocate space for numbers
                numbers = realloc(numbers, sizeof(int) * (size + 1));
                if (!numbers)
                {
                    return 1;
                }
                capacity++;
            }

            // Add number to list
            numbers[size] = number;
            size++;
        }
    }
// Thanks for looking
}
