#include "main.h"

/**
 * _islower- to check whether a character is lower_case.
 * @c: contains value to be checked.
 *
 * Return: 1 if it is lower_case.
 * Return: Always 0.
 */
int _islower(int c)
{

if (c > 'a' && c < 'z')
return (1);
else
return (0);
}
