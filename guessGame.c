#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Generate random number between 1 to 15
    srand(time(0));
    int lower = 1;
    int upper = 15;
    int random = (rand() % (upper - lower + 1)) + 1;
    int input, attempt = 1;

    while (1)
    {
        printf("enter your guessed number between 1 and 15: ");
        scanf("%d", &input);

        if (input < lower || input > upper)
        {
            printf("your input exceeded range of number \n");
        }

        else if (input > random)
        {
            printf("your guess is higher than original \n");
            attempt++;
        }

        else if (input < random)
        {
            printf("your gueesed number is lower than original \n");
            attempt++;
        }

        else if (input == random)
        {
            printf("your guess is correct and your number of attempts is %d", attempt);
            break;
        }
    }

    return 0;
}