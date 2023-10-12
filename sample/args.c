#include "lib.h"

int max(int num_args, ...);

int main()
{
	max(4, 1,2,3,4);
}

int max(int num_args, ...)
{
	va_list nums;
	va_start(nums, num_args);
	int i, x = 0;

	for (i = 0; i < num_args; i++)
	{
		x += va_arg(nums, int);
	}
	printf("total: %d\n", x);
	va_end(nums);
	return 0;
}
