#include "main.h"

/**
 * _islower(char c) -  function that checks for lowercase character.
 *
 * islower: Returns 1 if c is lowercase or Returns 0 otherwise 
 */
int _islower(int c)
{
	if (c <= 'a' && c >= 'z')
	
		return (1);
	
	else
	
		return (0);
	
}
