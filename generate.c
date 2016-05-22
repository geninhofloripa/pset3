/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // certifies user will only input 1 OR 2 command-line arguments
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }


    // funcion atoi transforms  a string into an integer
    int nloops = atoi(argv[1]);

    // if also a seed number is provided
    if (argc == 3)
    {
        // srand generates a seed to feed drand() using argv[2] as its own seed
        srand48((long int) atoi(argv[2]));
    }
    
    // in case no seed is provided
    else
    {
        srand48((long int) time(NULL));
    }

    // each number of nloops generates one pseudo-random number
    for (int i = 0; i < nloops; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}
