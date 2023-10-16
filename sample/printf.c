#include "variadic_functions.h"

/**
 *
 */

void print_all(const char *const format, ...)
{
	const char *ptr = format;

	va_list args;
	va_start(args, format);
	while (*ptr)
	{
		if (*ptr == 'c')
		{
			char x = va_arg(args, int);
			printf("%c", x);
		}
		else if (*ptr == 'i')
		{
			int x = va_arg(args, int);
			printf("%d", x);
		}
		else if (*ptr == 'f')
		{
			double x = va_arg(args, double);
			printf("%f", x);
		}
		else if (*ptr == 's')
		{
			char *x = va_arg(args, char *);
			if (x == NULL)
			{
				printf("(nil)");
			}
			printf("%s", x);
		}else if(*ptr){
			printf("%s", ptr);
		}
		ptr++;
	}
	printf("\n");
	va_end(args);
}
