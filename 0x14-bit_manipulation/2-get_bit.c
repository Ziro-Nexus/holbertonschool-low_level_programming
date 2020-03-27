#include "holberton.h"
/**
	* get_bit - get bit from index
	* @n: number
	* @index: binary index
	* Return: result binary
	*/
int get_bit(unsigned long int n, unsigned int index)
{
	int i, bin, boolean = 0, c = 0;

	for (i = 63; i >= 0; i--)
	{
		bin = n >> i;
		if ((bin & 1) && !boolean)
			boolean = 1;

		if (boolean)
		{
			c++;
			if (i - 1 == 0)
			{
				if (index > (unsigned int)c)
					return (-1);
				bin = n >> index;
				return ((bin & 1) ? 1 : 0);
			}
		}
	}
	return (-1);
}
