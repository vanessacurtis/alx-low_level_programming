#include "main.h"

/*
 * *_memcpy- copies n bytes
 * @dest: where to copy memory area
 * @src: where to copy memomory area from
 * @n: number of bytes to copy
 *
 * return:pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char  *pDest = dest;
	char *pSrc = src;

	while (n--)
	{
		*pDest++ = *pSrc++;
	}
	return (dest);
}
