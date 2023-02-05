#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	unsigned int l = UINT_MAX;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	_printf("%u\n", 1024);
	printf("%u\n", 1024);

	_printf("%u\n", -1024);
	printf("%u\n", -1024);

	_printf("%u\n", 0);
	printf("%u\n", 0);

	_printf("%u\n", UINT_MAX);
	printf("%u\n", UINT_MAX);

	_printf("%u\n", l);
	printf("%u\n", l);


	_printf("There is %u bytes in %u KB\n", 1024, 1);
	printf("There is %u bytes in %u KB\n", 1024, 1);

	_printf("%b\n", 98);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");

	_printf("hoberton school is fun\n");
	printf("hoberton school is fun\n");

	_printf("Hello %s ... %s\n", "...", "what");
	printf("Hello %s ... %s\n", "...", "what");

	_printf("Hello %c %c %c %c %c\n", 'H', 'l', 'b', 't', 'n');
	printf("Hello %c %c %c %c %c\n", 'H', 'l', 'b', 't', 'n');

	_printf("Hello %%\n");
	printf("Hello %%\n");

	_printf("Hello %s\n", "");
	printf("Hello %s\n", "");

	_printf("Hello %s ...\n", "...");
	printf("Hello %s ...\n", "...");

	_printf("Hello %s ... \n", NULL);
	printf("Hello %p ... \n", NULL);

	_printf("Hello %s ... \n", "Holberton");
	printf("Hello %s ... \n", "Holberton");

	_printf("Unknown:[%s]\n", "\0");
	printf("Unknown:[%s]\n", "\0");

	_printf("Unknown:[%s] %s\n", "", "");
	printf("Unknown:[%s] %s\n", "", "");

	_printf(NULL, "");
	/**printf(NULL, "");

	_printf("*", NULL);
	printf("*", NULL);

	_printf("Hello %c\n", '\0', 'l', 'b', 't', 'n');
	printf("Hello %c\n", '\0', 'l', 'b', 't', 'n');

	_printf("Hello %%%%%%%% %%%\n");
	printf("Hello %%%%%%%% %%%");

	_printf("Hello %\n");
	printf("Hello %");

	_printf("Hello % 123\n");
	printf("Hello % 123");*/

	_printf("Hello %% 340\n");
	printf("Hello %% 340\n");

	/*printf("Hello % w\n");

	_printf("Hello %    w q\n");
	printf("Hello %    w q\n");*/


/*	printf("Hello % 32w 100");*/

	 _printf("h_ %% %% jnd _printf\n");
	 printf("h_ %% %% jnd _printf\n");
	_printf("\n");
	printf("\n");

	return (0);
}
