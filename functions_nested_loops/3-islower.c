#include "main.h"

/**
 * _islower(char c) -  function that checks for lowercase character.
 *
 * islower: Returns 1 if c is lowercase or Returns 0 otherwise 
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
        {
                return (1);
        }
        return (0);
}
