#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // Check if the number is less than 2, which is not prime
    if (number < 2)
    {
        return false;
    }

    // Check if the number is divisible by any number between 2 and the square root of the number
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            // The number is divisible by i, so it is not prime
            return false;
        }
    }

    // The number is not divisible by any number between 2 and the square root of the number, so it is prime
    return true;
}
