/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */


#include <cs50.h>
#include <string.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */



bool search(int value, int values[], int n)
{
    // return false if n is not positive
    if (n <= 0) 
    {
        return false;
    }
    
    int start = 0;
    int end = n - 1;
    
    while (start <= end)
    {
        int mid = (start + end) / 2;
        
        if (values[mid] == value)
            return true;
        
        else if (value < values[mid])
            end = mid - 1;
        
        else
            start = mid + 1;    
        
    }
    
    return false;
}



 
void sort(int values[], int n)
{

    for (int i = 0; i<n - 1; i++)
    {
        int index_min = i;
        for (int j = i+1; j<n; j++)
        {
            if (values[j] < values[index_min])
                index_min = j;    
        }
        
        int aux = values[i];
        values[i] = values[index_min];
        values[index_min] = aux;
    }
}




/*
bool search(int needle, int haystack[], int size)
{
    for (int i = 0; i < size; i++)
        if (haystack[i] == needle)
            return true;

    return false;
}
*/

