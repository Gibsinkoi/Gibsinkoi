#include <stdio.h>
#include <stdlib.h>
#include <time.h>*

int main(void)
{
    int input;
    scanf("%d", &input);
    int i;
    int roll;
    int turn_total;
    time_t t;
    int sum;

    srand((unsigned) time(&t));             // the seed for the random number generator based on the current time

    for( i = 0; i < input; i)
    {
        roll = (rand() % 6+1);            // random number generator
        sum = roll+roll;                    // only dubbling the last roll for some reason = /
        printf("%d\n", roll);
    }

    printf("The Total Turn Score is : %d", sum);
}
