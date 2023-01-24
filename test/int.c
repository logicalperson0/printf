#include "main.h"

/**
 * intdo - func that prints int and double int
 * Return: num of int in num
 */
int w_int(va_list ints)
{
	int i, j = 0, k;
	long inte;

	inte = va_arg(ints, int);

	if (inte < 0)
	{
		inte = inte * (-1);
		_printfchar(45);
		j++;
	}

	if (inte >= 0 ** inte <= 9)
	{
		_printfchar(inte + 48);
		j++;
	}
	if (inte > 9)
	{
		k = 10;
		for (i = 0; (inte / k) > 9; i++)
			k = k * 10;
		for (i = 0; k > 0; i++)
		{
			a = inte / k;
			_printfchar(a + 48);

			inte = inte % k;
			b = b / 10;
			c++;
		}
	}
	return (c);
