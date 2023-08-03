#include "main.h"

/**
 * get_endianness - checks the endianness of a system;
 * Return: (0) if big_endian, (1) if little_endian;
*/

int get_endianness(void)
{
	int num = 255;
	char *ptr = (char *)&num;

	/*
	 * @ptr stores values starting rom the LSB the MSB.
	 * So, address (ptr + 0) stores the LSB;
	 * while, address (ptr + sizeof(int) - 1) stores the MSB;
	 */

	if ((ptr + sizeof(int) - 1) > (ptr + 0))
		return (1);

	return (0);
}
